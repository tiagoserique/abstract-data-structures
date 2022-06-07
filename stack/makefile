CFLAGS = -Wall

objects = main.o adt_stack.o tests.o


all: $(objects)
	gcc $(objects) -o stack


main.o: main.c
	gcc -c main.c $(CFLAGS)


adt_stack.o: adt_stack.c adt_stack.h
	gcc -c adt_stack.c $(CFLAGS)


tests.o: tests.c tests.h
	gcc -c tests.c $(CFLAGS)


clean:
	rm -rf *.o


purge: clean
	rm -rf stack