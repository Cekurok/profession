# Makefile to all the design pattern programs
CFLAGS = -Wall -Wextra -O2 -g -c
SRC = src
INC = inc
CC = cc

all : compile doxygen

compile : main
	@echo "Build completed - Logger Project"

main : main.o

main.o : $(SRC)/main.c $(INC)/main.h
	$(CC) $(CFLAGS) $(SRC)/main.c

.PHONY: clean
clean : 
	rm -f main *.o
	rm -rf docs
	@echo "Clean up completed - Logger Project"

.PHONY : doxygen
doxygen :
	doxygen config
