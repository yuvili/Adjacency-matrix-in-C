CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB_LOOP = my_mat.o
FLAGS= -Wall -g
EXE = loops connections 

#target commands
all: $(EXE)

connections: $(OBJECTS_MAIN) libclassloop.a 
	$(CC) $(FLAGS) -o connections $(OBJECTS_MAIN) libclassloop.a -lm

loops: libclassloop.a

#static libs
libclassloop.a: $(OBJECTS_LIB_LOOP)
	$(AR) -rcs libclassloop.a $(OBJECTS_LIB_LOOP)
#objects
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

main.o: main.c my_mat.h  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so $(EXE)