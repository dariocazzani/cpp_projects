#include "vector.h"
#include <cmath>
#include <iostream>

double sqrt_sum(Vector& v)
{
	double sum = 0;
	for (int i = 0; i != v.size(); ++i)
		sum += sqrt(v[i]);
	return sum;
}

void test_error_handling(Vector& v, int position)
{
	try {
		v[position] = 7;		// try to ccess beyond the end of v
	}
	catch (std::out_of_range & msg) {
		std::cout << "Can't access elem " << position
				  << " from Vector of size " << v.size() << std::endl;
		std::cout << msg.what() << std::endl;
	}
}

void test_invariants()
{
	try {
		Vector v(-27);
	}
	catch (std::length_error) {
		std::cout << "Test failed: length_error" << std::endl;
	}
	catch (std::bad_alloc) {
		// test is not designed to handle memory exhaustion
		std::cout << "Test is not designed to handle memory exhaustion" << std::endl;
		std::terminate();
	}
}

int main()
{
	Vector v(5);
	std::cout << "Vector is " << v.size() << " in size" << std::endl;
	std::cout << "sqrt_sum: " << sqrt_sum(v) << std::endl;

	test_error_handling(v, v.size());
	test_invariants();
}