#include "median.hpp"
#include "catch.hpp"


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