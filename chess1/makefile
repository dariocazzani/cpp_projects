CXX = g++ -std=c++11
DEBUG = -g
CFLAGS = -Wall -Wextra -Werror -pedantic $(DEBUG)

all: chess chess_test

chess : chess.o
	$(CXX) -o chess chess.o

chess_test : chess_test.o
	$(CXX) -o chess_test chess_test.o

chess_test.o: chess_test.cc 
	$(CXX) $(CFLAGS) -c chess_test.cc

chess.o : chess.cc
	$(CXX) $(CFLAGS) -c chess.cc	

test : chess_test
	./chess_test

clean :
	rm -rf *.o chess_test chess