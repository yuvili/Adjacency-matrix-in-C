CC = gcc
AR = ar
OBJECTS_MAIN = main.o
OBJECTS_LIB = my_mat.o
FLAGS= -Wall -g

all: libmymat.a connections
connections: $(OBJECTS_MAIN) libmymat.a
	$(CC) $(FLAGS) -o progmains $(OBJECTS_MAIN) libmymat.a
libmymat.a: $(OBJECTS_LIB)
	$(AR) -rcs libmymat.a $(OBJECTS_LIB)
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so progmains

