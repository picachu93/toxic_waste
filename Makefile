CC = gcc
CFLAGS = -g -Wall -std=c99
all: chem 
chem: chem.o
	$(CC) $(CFLAGS) -o chem chem.o

chem.o: chem.c
	$(CC) $(CFLAGS) -c chem.c
clean: 
	$(RM) $(all)
