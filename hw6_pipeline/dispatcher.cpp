#include <iostream>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
 
using namespace std;

int main() {

    int status = 0;
    int pipefd[2];
    pid_t pid1, pid2;

    if(fork() == 0) { // this is the child process
        pid1 = getpid(); //get the pid for this child
        close (pipefd[0]); //close the read end of the pipe
        dup2 (pipefd[1], 1); //redirect output to write end of pipe
        execve("./generator", NULL, NULL);
    }
        
    if(fork() == 0) { // this is the child process
        pid2 = getpid(); // get the pid for this child
        close (pipefd[1]); //close the write end of the pipe
        dup2 (pipefd[0], 0); //redirect input to read end of pipe
        execve("./consumer", NULL, NULL);
    }
    
    cout << pid1;
    sleep(5);
    
    kill(pid1, SIGTERM);
    waitpid(pid1, &status, WEXITED);
    cerr << "child[" << pid1 << "] exited with status " << status << endl;
    
    waitpid(pid2, &status, WEXITED);
    cerr << "child[" << pid2 << "] exited with status " << status << endl;
        
return 0;
}

