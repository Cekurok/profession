# Makefile to all the design pattern programs
CFLAGS = -Wall -Wextra -O2 -g -c
SRC = src
INC = inc
CC = cc

all : compile doxygen

compile : 0001
	@echo "Build completed - Template Project"

0001 : 0001.o

0001.o : $(SRC)/0001.c 
	$(CC) $(CFLAGS) $(SRC)/0001.c

.PHONY : clean
clean : 
	rm -f 0001 *.o
	rm -rf docs
	@echo "Clean up completed - Template Project"

.PHONY : doxygen
doxygen :
	doxygen config
