#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "median.hpp"
#include "../catch.hpp"


TEST_CASE( "Median are computed", "[median]" )
{
	std::vector<int> v1;
	REQUIRE(median(v1) == 0.0);

	v1.push_back(8);
	REQUIRE(median(v1) == 8.0);

	v1.push_back(3);
	REQUIRE(median(v1) == 5.5);

	v1.push_back(1);
	REQUIRE(median(v1) == 3.0);
}

TEST_CASE("Test is_even function", "[even]")
{
	auto a = 0;
	REQUIRE(is_even(a) == true);

	a = 1;
	REQUIRE(is_even(a) == false);

	a = -1;
	REQUIRE(is_even(a) == false);

	a = 6;
	REQUIRE(is_even(a) == true);
}