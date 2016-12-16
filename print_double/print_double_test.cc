#define CATCH_CONFIG_MAIN // This tell Catch to procide a main()
#include "../catch.hpp"
#include "print_double.h"

TEST_CASE("Test square function", "[square]")
{
	REQUIRE(square(2) == 4);
	REQUIRE(square(3) == 9);
}