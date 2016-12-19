#include "median.hpp"
#include "read_txt.hpp"

#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::string filename {"num_boats.txt"};
	int m {0};
	std::vector<int> v;
	v = read_txt(filename);
	
    m = median(v);
    std::cout << "Median is: " << m << std::endl;
    return 0;
}
