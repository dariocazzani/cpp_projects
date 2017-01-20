CXX = g++ -std=c++11
DEBUG = -g
CFLAGS = -Wall -Wextra -Werror -pedantic $(DEBUG)

all: user

user : user.o vector.o
	$(CXX) -o user user.o vector.o

user.o : user.cc vector.h vector.cc
	$(CXX) $(CFLAGS) -c user.cc vector.cc

clean :
	rm -rf *.o user	