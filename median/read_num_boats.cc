#include "median.hpp"

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main()
{
    std::string filename {"num_boats.txt"};
    std::ifstream infile(filename);
    if (!infile) {
        std::cout << "Could not open file " << filename << "\n";
        return EXIT_FAILURE;
    }

    std::vector<int> boats_per_county;
    for (std::string line; std::getline(infile, line);) {
        int num_boats;
        std::istringstream ss(line);
        ss >> num_boats;
        boats_per_county.push_back(num_boats);
    }

    std::cout << "number of counties which have reported number of boats " << boats_per_county.size() << "\n";
    std::cout << "median of boats above 28 meter per county " << median(boats_per_county) << "\n";

    return EXIT_SUCCESS;
}