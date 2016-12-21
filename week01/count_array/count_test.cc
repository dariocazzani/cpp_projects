#define CATCH_CONFIG_MAIN // This tell Catch to procide a main()
#include "../catch.hpp"
#include "count.hpp"

TEST_CASE("Test count function", "[count]")
{
	char p[] {'a', 'b'};
	REQUIRE(count_x(p, 'a') == 1);
}