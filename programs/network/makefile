# Makefile to all the design pattern programs
CFLAGS = -Wall -Wextra -O2 -g -c
SRC = src
INC = inc
CC = cc -pthread

all : compile doxygen

compile : main client server
	@echo "Build completed - Network Project"

main : main.o

main.o : $(SRC)/main.c $(INC)/main.h
	$(CC) $(CFLAGS) $(SRC)/main.c

server : server.o

server.o : $(SRC)/server.c $(INC)/server.h
	$(CC) $(CFLAGS) $(SRC)/server.c

client : client.o

client.o : $(SRC)/client.c $(INC)/client.h
	$(CC) $(CFLAGS) $(SRC)/client.c

.PHONY : clean
clean : 
	rm -f main server client *.o
	rm -rf docs
	@echo "Clean up completed - Network Project"

.PHONY : doxygen
doxygen :
	doxygen config
