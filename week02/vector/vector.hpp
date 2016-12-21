#ifndef VECTOR_INCLUDE
#define VECTOR_INCLUDE

class Vector {
public:
	Vector(int s):									// construct a Vector
		elem{new double[s]}, 
		sz{s} 
		{}											
	double& operator[](int i) {						// element access: subscripting
		return elem[i]; 
	}
	int size() {
		return sz;
	}

private:
	double* elem;									// pointer to the elements
	int sz;											// the number of elements
};

double sum_vector(Vector v)
{
	double sum {0.0};
	for (auto i = 0; i != v.size(); ++i)
		sum += v[i];
	return sum;
}

#endif