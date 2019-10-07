CFLAGS=-Wall -pedantic -std=c11 -I. -g

all:	ltest1

list.o:	list.c list.h
				gcc $(CFLAGS) -c list.c

ltest1.o:	ltest1.c list.h
					gcc $(CFLAGS) -c ltest1.c

ltests.o: ltests.c list.h
					gcc $(CLAGS) -c ltests.c

ltest1:	ltest1.o list.o
				gcc $(CFLAGS) ltest1.o list.o -o ltest1

ltests: ltests.o list.o
				gcc $(CFLAGS) ltests.o list.o -o ltests

clean:
				rm -f *.o ltest1 ltests
