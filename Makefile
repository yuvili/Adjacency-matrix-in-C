CC = gcc
AR = ar
OBJECTS_MAIN = main.o
OBJECTS_LIB = my_mat.o
FLAGS= -Wall -g

all:  connections

connections: $(OBJECTS_MAIN) $(OBJECTS_LIB)
	$(CC) $(FLAGS) -o connections $(OBJECTS_MAIN) $(OBJECTS_LIB)
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections

