// g++ -std=c++11 -Wall -Wextra -Werror -pedantic -o chess1 chess1.cpp && ./chess1
#include <iostream>
#include "chess.hpp"

int main()
{
    int sum {1};
    int square {1};
    int grains_this_square {1};

    std::cout << "square " << square << ", grains this square = " << grains_this_square << ", total = " << sum << "\n";
}