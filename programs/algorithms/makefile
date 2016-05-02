# Makefile to all the design pattern programs
CFLAGS = -Wall -g -c
SRC = src
INC = inc
CC = cc

all : compile doxygen
	@echo "Build completed - Algorithms Project"

compile : main

main : main.o

main.o : $(SRC)/main.c $(INC)/main.h
	$(CC) $(CFLAGS) $(SRC)/main.c

.PHONY: clean
clean : 
	rm -f main *.o
	rm -rf docs
	@echo "Clean up completed - Algorithms Project"

.PHONY : doxygen
doxygen :
	doxygen config

