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
		guesses++;	
	}
	std::cout << "Congratulations, you won in " << guesses << " attempts!" << std::endl;
	return 0;
}