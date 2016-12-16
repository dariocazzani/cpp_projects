CXX = g++ -std=c++11
DEBUG = -g
CFLAGS = -Wall -Wextra -Werror -pedantic $(DEBUG)


all: count count_test clean

count : count.o
	$(CXX) -o count count.o

count_test : count_test.o
	$(CXX) -o count_test count_test.o

count_test.o: count_test.cc 
	$(CXX) $(CFLAGS) -c count_test.cc

count.o : count.cc
	$(CXX) $(CFLAGS) -c count.cc	

test : count_test
	./count_test

clean :
	rm -rf *.o count_test