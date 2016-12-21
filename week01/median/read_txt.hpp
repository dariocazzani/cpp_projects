#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::vector<int> read_txt(std::string filename)
{

	std::vector<int> boats_per_county;
	std::ifstream infile(filename);
	if (!infile) {
		std::cout << "Could not open file " << filename << std::endl;
		boats_per_county.push_back(-1);
	}

	else {
		std::cout << "Reading from " << filename << std::endl;
		for (std::string line; std::getline(infile, line);) {
			int num_boats;
			std::istringstream ss(line);
			ss >> num_boats;
			boats_per_county.push_back(num_boats);
		}
	}

	//std::cout << "number of counties which have reported number of boats " << boats_per_county.size() << "\n";
	//std::cout << "median of boats above 28 meter per county " << median(boats_per_county) << "\n";

	return boats_per_county;
}