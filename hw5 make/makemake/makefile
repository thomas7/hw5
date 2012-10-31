#Thomas Elliott
#HW5 Make a makefile
CC = g++
CFLAGS = -Wall –g
OBJS = exprtest.o driver.o parser.tab.o scanner.o

all: exprtest

exprtest: ${OBJS}
    ${CC} ${CFLAGS} -o $@ ${OBJS}   

exprtest.o: exprtest.cpp
    ${CC} ${CFLAGS} –c $<    

driver.o: scanner.hpp driver.hpp driver.cpp
    ${CC} ${CFLAGS} –c $<

scanner.o: parser.tab.hpp scanner.hpp scanner.cpp
    $ flex -t scanner.ll > scanner.cpp
    ${CC} ${CFLAGS} –c $<

parser.tab.o: parser.tab.hpp parser.tab.cpp expression.hpp scanner.hpp driver.hpp
    $ bison parser.ypp
    ${CC} ${CFLAGS} –c $<
    
clean:
    rm -f *.o *~ core tmp
    rm -f parser.cpp
    rm -f parser.hpp
    rm -f scanner.cpp
