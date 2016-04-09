# File:    makefile
# Author:  Ojochete Agamah
# Program: structs. assignment 7

# This makefile will compile and link the program producing an
# executable called prog.

# macros
EXE=prog6
OBJECTS=main.o read.o output.o Average.o median.o sort.o
CFLAGS=-Wall
LFLAGS=

$(EXE):		$(OBJECTS)
		g++ -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp
		g++ $(CFLAGS) -c main.cpp

read.o:		read.cpp
		g++ $(CFLAGS) -c read.cpp

output.o:		output.cpp
		g++ $(CFLAGS) -c output.cpp

getAverage.o:	getAverage.cpp
		g++ $(CFLAGS) -c getAverage.cpp

getMedian.o:	getMedian.cpp
		g++ $(CFLAGS) -c getMedian.cpp

getMode.o:	getMode.cpp
		g++ $(CFLAGS) -c getMode.cpp

sort.o:	        sort.cpp
		g++ $(CFLAGS) -c sort.cpp

clean:
		rm -rf $(OBJECTS) $(EXE) *~
