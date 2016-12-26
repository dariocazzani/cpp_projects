#ifndef MASTERMIND_INCLUDE
#define MASTERMIND_INCLUDE

#include <vector>
#include <iostream>
#include <cassert>

void generate_code(std::vector<int>& c, const size_t code_size, const int num_colors);
void get_user_guess(std::vector<int>& g, const size_t code_size, const int num_colors);
void calculate_response(const std::vector<int>& g, 
						const std::vector<int>& c, 
						const size_t code_size, 
						const int num_colors);

void generate_code(std::vector<int>& c, const size_t code_size, const int num_colors)
{
	c = {1, 2, 3, 4};
	assert(c.size() == code_size);
	assert((int)c.size() < num_colors);
}

void get_user_guess(std::vector<int>& g, const size_t code_size, const int num_colors)
{
	assert((int)g.size() < num_colors);
	g.clear();
	int tmp;
	std::cout << "Please, enter your guess" << std::endl;
	for (size_t i = 0; i < code_size; ++i) {
		std::cout << "color " << i << " ";
		std::cin >> tmp;
		g.push_back(tmp);
	}
}

void calculate_response(const std::vector<int>& g, 
						const std::vector<int>& c, 
						const size_t code_size,
						const int num_colors)
{
	int b {0};
	for(size_t i = 0; i < code_size; ++i)
		(g[i] == c[i]) ? b++ : b;

	std::cout << "You guessed " << b << " number";
	std::cout << ((b != 1) ? "s" : "") << " in the right place." << std::endl;

	// Use formula from: http://mathworld.wolfram.com/Mastermind.html
	int w {0};
	for (auto color = 0; color < num_colors; ++color) {
		int guess_occurence = std::count(g.begin(), g.end(), color);
		int code_occurence = std::count(c.begin(), c.end(), color);
		w += ((guess_occurence < code_occurence) ? guess_occurence : code_occurence);
	}
	w-=b;

	std::cout << "You guessed " << w << " number";
	std::cout << ((w != 1) ? "s" : "") << " in the wrong place." << std::endl;
	
}


#endif