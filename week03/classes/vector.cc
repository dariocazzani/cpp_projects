#include "vector.hpp"

#include <algorithm>
#include <iostream>

Vector::Vector(int s) // constructor: acquire resources
: elem {new double[s]}
, sz {s}
{
    for (int i = 0; i != s; ++i)       // initialize elements
        elem[i] = 0;
    std::cout << __func__ << " creating vector of size " << s << "\n";
}

Vector::Vector(std::initializer_list<double> lst)  // initialize with a list
: elem {new double[lst.size()]}
, sz {static_cast<int>(lst.size())}
{
    std::copy(lst.begin(), lst.end(), elem);         // copy from lst into elem (§10.6)
}


Vector::~Vector() // destructor: release resources
{
    delete[] elem;
    std::cout << __func__ << " freeing vector of size " << sz << "\n";
}


double & Vector::operator[](int i)      // definition of subscripting
{
    return elem[i];
}

int Vector::size() const                // definition of size()
{
    return sz;
}

void Vector::push_back(double x)
{
    double * new_elem {new double[sz + 1]};
    for (int i = 0; i < sz; ++i)
        new_elem[i] = elem[i];
    new_elem[sz] = x;
    sz += 1;
    delete[] elem;
    elem = new_elem;
}