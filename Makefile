CC = gcc
CFLAGS = -g -Wall -std=c99
all: toxic 
toxic: toxic.o
	$(CC) $(CFLAGS) -o toxic toxic.o

toxic.o: toxic.c
	$(CC) $(CFLAGS) -c toxic.c
clean: 
	$(RM) $(all)
