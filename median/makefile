CXX = g++ -std=c++11
DEBUG = -g
CFLAGS = -Wall -Wextra -Werror -pedantic $(DEBUG)

all: median median_test

median : median.o
	$(CXX) -o median median.o

median_test : median_test.o
	$(CXX) -o median_test median_test.o

median_test.o: median_test.cc 
	$(CXX) $(CFLAGS) -c median_test.cc

median.o : median.cc
	$(CXX) $(CFLAGS) -c median.cc	

test : median_test
	./median_test

clean :
	rm -rf *.o median_test median