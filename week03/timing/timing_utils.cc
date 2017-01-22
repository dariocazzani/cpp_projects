#include <random>
#include <list>
#include <vector>
#include <algorithm>
#include "timing_utils.hpp"

int random_int(const int low, const int high)
{
	std::random_device rd;     // only used once to initialise (seed) engine
	std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
	std::uniform_int_distribution<int> uni(low, high); // guaranteed unbiased
	int random_integer = uni(rng);
	return random_integer;
}

void add_sort(std::vector<int>& v, const int num)
{
	v.push_back(num);
	std::sort(v.begin(), v.end());
}

void add_sort(std::list<int>& l, const int num)
{
	l.push_back(num);
	l.sort();
}