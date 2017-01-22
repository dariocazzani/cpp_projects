#include <iostream>
#include <list>
#include <vector>
#include <chrono>
#include <string>
#include "timing_utils.hpp"

const int MAX_INT = 100;

void do_work(std::vector<int> v)
{
	auto rnd{0};
	for(unsigned int i = 0; i < MAX_INT; ++i)
	{
		rnd = random_int(0, MAX_INT);
		add_sort(v, rnd);
	}
}

void do_work(std::list<int> l)
{
	auto rnd{0};
	for(unsigned int i = 0; i < MAX_INT; ++i)
	{
		rnd = random_int(0, MAX_INT);
		add_sort(l, rnd);
	}
}

template <typename Time>
void print_times(const Time t0, const Time t1, const std::string s)
{
	std::cout << "Sorting on " << s << " took: ";
	std::cout << std::chrono::duration_cast<std::chrono::microseconds>(t1-t0).count();
	std::cout << " microsec" << std::endl;
}

int main()
{
	std::list<int> l;
	std::vector<int> v;

	std::cout << "Test timing with " << MAX_INT;
	std::cout << " random integers."<< std::endl;

	auto t0 = std::chrono::high_resolution_clock::now();
	do_work(v);
	auto t1 = std::chrono::high_resolution_clock::now();
	print_times(t0, t1, "vectors");

	t0 = std::chrono::high_resolution_clock::now();
	do_work(l);
	t1 = std::chrono::high_resolution_clock::now();
	print_times(t0, t1, "lists");
}