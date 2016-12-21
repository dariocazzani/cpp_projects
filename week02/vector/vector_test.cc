#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "vector.hpp"
#include "../catch.hpp"

TEST_CASE( "Vector class is created and tested", "[vector]" )
{
	int size {5};
	Vector v1(size);
	REQUIRE(v1.size() == size);

	Vector v2(2);
	int elem {5};
	v2[0] = elem;
	REQUIRE(v2[0] == elem);
}

TEST_CASE( "Test sum_vector", "[sum_vector]")
{
	int size {1203};
	Vector v3(size);
	for (auto i = 0; i < v3.size(); ++i)
		v3[i] = i;
	REQUIRE(sum_vector(v3) == (size * (size-1) / 2));
}