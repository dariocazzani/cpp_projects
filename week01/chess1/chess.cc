#include <iostream>
#include "chess.hpp"

int main()
{
    int rice {0};

    std::cout << "How many grains should we fit? ";
    std::cin >> rice;
    std::cout << "To fit " << rice << " grains of rice you need " 
    		  << squares_required(rice) << " square(s)" << std::endl;
}