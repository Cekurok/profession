# Makefile to all the design pattern programs
CFLAGS = -Wall -Wextra -O2 -g -c
SRC = src
INC = inc
CC = g++

all : compile doxygen

compile : valgrind01
	@echo "Build done - Valgrind Project"

valgrind01 : valgrind01.o
valgrind01.o : $(SRC/valgrind01.cpp) $(INC)/valgrind01.h
	$(CC) $(CFLAGS) $(SRC)/valgrind01.cpp

.PHONY: clean
clean : 
	rm -f valgrind01 *.o cachegrind* callgrind* bb* massif*
	rm -rf docs
	@echo "Clean up done - Valgrind Project"

.PHONY : doxygen
doxygen :
	doxygen config

