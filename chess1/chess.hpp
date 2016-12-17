#include <cmath>

int squares_required(int num_grains)
{
	double log {1.};
	if (num_grains == 0)
		return num_grains;
	else
		log = log2(num_grains);
	return floor(log) + 1;
}

/*
int squares_required(int num_grains)
{
	int squares {0};
	int grains {1};
	int sum {0};
	while (grains <= num_grains)
	{
		squares++;
		grains*=2;
		sum+=grains;
	}
    return squares;
}
*/