TARGETS=sort_test
CXXFLAGS = -std=c++11 -g
CXX=g++
LD=g++
CC=g++

sort_test: sort_test.o main.o builtin.o selectionSort.o mergeSort.o quickSort.o

clean:
	rm -f *.o $(TARGETS)