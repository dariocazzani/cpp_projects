#include <iostream>
#include "vector.hpp"

int main()
{
	int s{};

	std::cout << "type how big you want the vector to be: ";
	std::cin >> s;
	Vector v(s); // make a vector of s elements

	for (auto i = 0; i != v.size(); ++i) {
		std::cout << "type a number: ";	
		std::cin >> v[i]; // read into elements
	}
	
	double sum = sum_vector(v);
	std::cout << "The total sum is " << sum << std::endl;
	return 0;
}
