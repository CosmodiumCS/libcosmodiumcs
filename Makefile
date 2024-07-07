CC=gcc
BINS=main.c cosmodiumcs.c cosmodiumcs.h

all: main static
	./main

main: $(BINS)
	$(CC) -o main main.c cosmodiumcs.c

static: $(BINS)
	$(CC) -o cosmodiumcs.o -c cosmodiumcs.c
	ar rcs libcosmodiumcs.a cosmodiumcs.o
	$(CC) -o main main.c -L. -lcosmodiumcs

shared: $(BINS)
	$(CC) -o main main.c -L. -lcosmodiumcs

clean:
	rm main *.o *.so *.a
