CC=gcc
AR=ar
FLAGS= -Wall -g

all: frequency

frequency: frequency.c frequency.h
	$(CC) $(FLAGS)  $^ -o frequency

.PHONY:clean all

clean:
	rm frequency