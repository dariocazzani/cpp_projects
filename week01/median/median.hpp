#ifndef MEDIAN_INCLUDE
#define MEDIAN_INCLUDE

#include <vector>
#include <algorithm>

double median(std::vector<int> v);
bool is_even(int i);

double median(std::vector<int> v) // make copy of vector because sort modifies it
{
	double mean {0.0};

	std::sort(v.begin(), v.end());
	
	if (v.size() == 0)
		mean = 0.0;
	else if (is_even(v.size()))
		mean = ((double)v.at(v.size() / 2) + (double)v.at(v.size() / 2 - 1)) / 2.0;
	else
		mean = (double)v.at((v.size() - 1) / 2);
	return mean;
}

bool is_even(int i)
{
	if (i % 2 == 0)
		return true;
	return false; 
}

#endif