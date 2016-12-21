CXX = g++ -std=c++11
DEBUG = -g
CFLAGS = -Wall -Wextra -Werror -pedantic $(DEBUG)

all: vector vector_test

vector : vector.o
	$(CXX) -o vector vector.o

vector_test : vector_test.o
	$(CXX) -o vector_test vector_test.o

vector_test.o: vector_test.cc 
	$(CXX) $(CFLAGS) -c vector_test.cc

vector.o : vector.cc
	$(CXX) $(CFLAGS) -c vector.cc   

test : vector_test
	./vector_test

clean :
	rm -rf *.o vector_test vector