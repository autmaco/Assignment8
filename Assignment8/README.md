#File: Makefile
#Author:Autumn Macon

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

$(TARGET): main.o 
	$(CC) main.o -o $(TARGET)

main.o: main.cpp  
	$(CC) $(CFLAGS) main.cpp

inventory.o:  library.cpp  library.h
	$(CC) $(CFLAGS)  library.cpp

clean:
	rm *.o *~ $(TARGET)



