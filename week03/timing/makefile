CXX = g++ -std=c++11
DEBUG = -g
CFLAGS = -Wall -Wextra -Werror -pedantic $(DEBUG)

all: test_timing

test_timing : test_timing.o timing_utils.o
	$(CXX) -o test_timing test_timing.o timing_utils.o

test_timing.o : test_timing.cc timing_utils.hpp timing_utils.cc
	$(CXX) $(CFLAGS) -c test_timing.cc timing_utils.cc

clean :
	rm -rf *.o test_timing	