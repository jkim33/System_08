all: sieve.o func.o
	gcc sieve.o func.o -lm

func.o: func.h func.c
	gcc -c func.c

sieve.o: sieve.c func.h
	gcc -c sieve.c

run:
	./a.out
