CFLAGS=-Wall -pedantic -std=c11 -I. -g

all:	ltest1 ltest2 ltest3 ltest4

list.o:	list.c list.h
				gcc $(CFLAGS) -c list.c

ltest1.o:	ltest1.c list.h
					gcc $(CFLAGS) -c ltest1.c

ltest2.o: ltest2.c list.h
					gcc $(CFLAGS) -c ltest2.c

ltest3.o: ltest3.c list.h
					gcc $(CFLAGS) -c ltest3.c

ltest4.o: ltest4.c list.h
					gcc $(CFLAGS) -c ltest4.c

ltest1:	ltest1.o list.o
				gcc $(CFLAGS) ltest1.o list.o -o ltest1

ltest2: ltest2.o list.o
				gcc $(CFLAGS) ltest2.o list.o -o ltest2

ltest3: ltest3.o list.o
				gcc $(CFLAGS) ltest3.o list.o -o ltest3

ltest4: ltest4.o list.o
				gcc $(CFLAGS) ltest4.o list.o -o ltest4

clean:
				rm -f *.o ltest1 ltest2 ltest3 ltest4
