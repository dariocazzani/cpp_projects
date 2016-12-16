CXX = g++
DEBUG = -g
CFLAGS = -std=c++11 -Wall -Wextra -Werror -pedantic $(DEBUG)


all: test_print_double clean

print_double : print_double.o
	$(CXX) -o print_double print_double.o

test_print_double : print_double_test.o
	$(CXX) -o test_print_double print_double_test.o

test_print_double.o : print_double_test.cc 
	$(CXX) $(CFLAGS) -c print_double_test.cc

print_double.o : print_double.cc
	$(CXX) $(CFLAGS) -c print_double.cc	

test : test_print_double
	./test_print_double

clean :
	rm -rf *.o test_print_double