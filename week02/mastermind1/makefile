CXX = g++ -std=c++11
DEBUG = -g
CFLAGS = -Wall -Wextra -Werror -pedantic $(DEBUG)

all: mastermind mastermind_test

mastermind : mastermind.o
	$(CXX) -o mastermind mastermind.o

mastermind_test : mastermind_test.o
	$(CXX) -o mastermind_test mastermind_test.o

mastermind_test.o: mastermind_test.cc 
	$(CXX) $(CFLAGS) -c mastermind_test.cc

mastermind.o : mastermind.cc
	$(CXX) $(CFLAGS) -c mastermind.cc   

test : mastermind_test
	./mastermind_test

clean :
	rm -rf *.o mastermind_test mastermind