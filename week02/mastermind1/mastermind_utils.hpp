#ifndef MASTERMIND_UTILS
#define MASTERMIND_UTILS

#include <random>

int random_int(const int low, const int high)
{
	std::random_device rd;     // only used once to initialise (seed) engine
	std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
	std::uniform_int_distribution<int> uni(low, high); // guaranteed unbiased
	int random_integer = uni(rng);
	return random_integer;
}

#endif
