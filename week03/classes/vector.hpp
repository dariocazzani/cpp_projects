#ifndef VECTOR_INCLUDE
#define VECTOR_INCLUDE

#include <initializer_list>

class Vector {
private:
    double * elem;       // elem points to an array of sz doubles
    int sz;
public:
    Vector(int s);
    Vector(std::initializer_list<double>);     // initialize with a list of doubles
    ~Vector();

    double & operator[](int i);
    int size() const;
    void push_back(double);                    // add element at end, increasing the size by one
};

#endif