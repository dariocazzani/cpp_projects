#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "mastermind.hpp"
#include "mastermind_utils.hpp"
#include "../catch.hpp"

TEST_CASE( "Generate code", "[code]" )
{
	std::vector<int> code;
	size_t code_size = 4;
	int num_colors = 6;

	generate_code(code, code_size, num_colors);
	REQUIRE(code.size() == code_size);
	for (size_t i = 0; i < code_size; ++i)
		REQUIRE(code[i] < num_colors);
}

TEST_CASE( "Test random integer generator" , "[random int]" )
{
	int low {0};
	int high {10};
	REQUIRE(low <= random_int(low, high) <= high);
}