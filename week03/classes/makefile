#CXX = g++
CXX = clang++
CFLAGS = -std=c++11 -Wall -Wextra -Werror -pedantic
#CFLAGS = -std=c++14 -Wall -Wextra -Werror -pedantic

all: test_classes

test_classes: test_classes.o vector.o complex.o
	$(CXX) -o test_classes test_classes.o vector.o complex.o
	
test_classes.o: test_classes.cc
	$(CXX) $(CFLAGS) -c test_classes.cc
	
vector.o: vector.cc vector.hpp
	$(CXX) $(CFLAGS) -c vector.cc
	
complex.o: complex.cc complex.hpp
	$(CXX) $(CFLAGS) -c complex.cc	
		
clean:
	rm -rf *.o test_classes