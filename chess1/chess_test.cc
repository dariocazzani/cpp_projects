// g++ -std=c++11 -Wall -Wextra -Werror -pedantic -o chess1_tdd chess1_tdd.cpp && ./chess1_tdd (-s)
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../catch.hpp"
#include "chess.hpp"

TEST_CASE("Get number of squares required to get at least n grains of rice")
{
    REQUIRE(squares_required(0) == 0);
    REQUIRE(squares_required(1) == 1);
    REQUIRE(squares_required(2) == 2);
    REQUIRE(squares_required(4) == 3);
    REQUIRE(squares_required(10) == 4);
	REQUIRE(squares_required(1000) == 10);
    REQUIRE(squares_required(1000000) == 20);
    REQUIRE(squares_required(1000000000) == 30);
}