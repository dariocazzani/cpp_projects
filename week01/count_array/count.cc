#include <iostream>
#include "count.hpp"

int count_x(char* p, char x);
void print(int);

int main()
{
	char p[] {'a', 'b'};
	print(count_x(p, 'a'));
	std::cout << std::endl;
	return 0;
}