
CFLAGS = -Wall

objects = main.o adt_linked_list.o


all: $(objects)
	gcc $(objects) -o adt_linked_list 


main.o: main.c
	gcc -c main.c $(CFLAGS)


adt_linked_list.o: adt_linked_list.c
	gcc -c adt_linked_list.c $(CFLAGS)


clean:
	rm -f *.o


purge: clean
	rm -f adt_linked_list

