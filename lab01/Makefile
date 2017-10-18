all: myBstDemo.c

CFLAGS=-g -O3

# Symbols helpful for understanding the productions
#   $@ is the production's target
#   $^ are the production's prerequisites

myBstDemo: myBinarySearchTree.o myBstDemo.o
	cc -o $@ $^

myBinarySearchTree.o: myBinarySearchTree.c binarySearchTree.h
	cc -c $(CFLAGS) myBinarySearchTree.c

myBstDemo.o: myBstDemo.c binarySearchTree.h
	cc -c $(CFLAGS) myBstDemo.c

clean:
	rm -f *.o myBstDemo

demo: myBstDemo
	 ./myBstDemo

