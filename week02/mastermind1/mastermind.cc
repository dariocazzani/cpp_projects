#include <iostream>
#include <vector>
#include "mastermind.hpp"

constexpr size_t code_size {4};
constexpr int num_colors {6};

int main()
{
	// generate code
	std::vector<int> code;
	generate_code(code, code_size, num_colors);
	
	std::vector<int> guess;
	int guesses {0};
	while (guess != code) {
	    get_user_guess(guess, code_size, num_colors);
		calculate_response(guess, code, code_size, num_colors);
	//     show feedback
		guesses++;	
	}
	// you won in x moves
	return 0;
}