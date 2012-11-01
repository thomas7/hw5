#Thomas Elliott
#HW5 Make a makefile
CC = g++
CFLAGS = -Wall -g -MMD
OBJS = exprtest.o driver.o parser.tab.o scanner.o

all: exprtest

exprtest: ${OBJS}
	${CC} ${CFLAGS} -o $@ ${OBJS}   

exprtest.o: exprtest.cpp
	${CC} ${CFLAGS} -c $<

driver.o: driver.cpp scanner.hpp driver.hpp
	${CC} ${CFLAGS} -c $<

scanner.o: scanner.cpp parser.tab.hpp scanner.hpp
	flex -t scanner.ll > scanner.cpp
	${CC} ${CFLAGS} -c $<

parser.tab.o: parser.tab.cpp parser.tab.hpp expression.hpp scanner.hpp driver.hpp
	bison parser.ypp
	${CC} ${CFLAGS} -c $<

clean:
	rm -f *.o *~ core tmp
	rm -f parser.tab.cpp
	rm -f parser.tab.hpp
	rm -f scanner.cpp
