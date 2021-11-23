CC = gcc
AR = ar
OBJECTS_MAIN = main.o
OBJECTS_LIB = my_mat.o
FLAGS= -Wall -g

all: libmymat.so connections

connections: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o connections $(OBJECTS_MAIN)
libmymat.so: $(OBJECTS_LIB)
	$(CC) -shared -o libmymat.so $(OBJECTS_LIB)
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections

