CFLAGS=-Wall -pedantic -std=c11 -I. -g

all:	ltest1 ltest2 ltest3 ltest4 ltest5 ltest6 ltest7 ltest8 ltest9 ltest10

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

ltest5.o: ltest5.c list.h
					gcc $(CFLAGS) -c ltest5.c

ltest6.o: ltest6.c list.h
					gcc $(CFLAGS) -c ltest6.c

ltest7.o: ltest7.c list.h
					gcc $(CFLAGS) -c ltest7.c

ltest8.o: ltest8.c list.h
					gcc $(CFLAGS) -c ltest8.c

ltest9.o: ltest9.c list.h
					gcc $(CFLAGS) -c ltest9.c

ltest10.o: ltest10.c list.h
					gcc $(CFLAGS) -c ltest10.c

ltest1:	ltest1.o list.o
				gcc $(CFLAGS) ltest1.o list.o -o ltest1

ltest2: ltest2.o list.o
				gcc $(CFLAGS) ltest2.o list.o -o ltest2

ltest3: ltest3.o list.o
				gcc $(CFLAGS) ltest3.o list.o -o ltest3

ltest4: ltest4.o list.o
				gcc $(CFLAGS) ltest4.o list.o -o ltest4

ltest5: ltest5.o list.o
				gcc $(CFLAGS) ltest5.o list.o -o ltest5

ltest6: ltest6.o list.o
				gcc $(CFLAGS) ltest6.o list.o -o ltest6

ltest7: ltest7.o list.o
				gcc $(CFLAGS) ltest7.o list.o -o ltest7

ltest8: ltest8.o list.o
				gcc $(CFLAGS) ltest8.o list.o -o ltest8

ltest9: ltest9.o list.o
				gcc $(CFLAGS) ltest9.o list.o -o ltest9

ltest10: ltest10.o list.o
				gcc $(CFLAGS) ltest10.o list.o -o ltest10

clean:
				rm -f *.o ltest1 ltest2 ltest3 ltest4 ltest5 ltest6 ltest7 ltest8 ltest9 ltest10
