CXX = g++ -std=c++11
DEBUG = -g
CFLAGS = -Wall -Wextra -Werror -pedantic $(DEBUG)

all: main

main : main.o helloworld.o
	$(CXX) -o main main.o helloworld.o

main.o : main.cc helloworld.h helloworld.cc
	$(CXX) $(CFLAGS) -c main.cc helloworld.cc

clean :
	rm -rf *.o main	