#File: Makefile
#Author: Autumn Macon

#Make file for  library of books assignment 6

# Compiler Version
CC=g++

# Debugging flag -g
DEBUG=-g

# Target
TARGET=a.o

# Compile with all errors and warnings
CFLAGS=-c -Wall $(DEBUG)

all: $(TARGET)

$(TARGET): main.o BST.o node.o 
	$(CC) main.o BST.o node.o -o $(TARGET)

main.o: main.cpp  
	$(CC) $(CFLAGS) main.cpp

BST.o:  BST.cpp  BST.h  
	$(CC) $(CFLAGS) BST.cpp

node.o: node.cpp  node.h
	$(CC) $(CFLAGS) node.cpp

clean:
	rm *.o *~ $(TARGET)





