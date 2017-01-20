#ifndef OUR_COMPLEX_INCLUDE
#define OUR_COMPLEX_INCLUDE

#include <iostream>

namespace our_complex {
class complex {
     double re, im; // representation: two doubles
public:
     complex(double r, double i) :re{r}, im{i} {}    // construct complex from two scalars
     complex(double r) :re{r}, im{0} {}              // construct complex from one scalar
     complex() :re{0}, im{0} {}                      // default complex: {0,0}

     double real() const {return re;}
     void real(double d) {re = d;}
     double imag() const {return im;}
     void imag(double d) {im = d;}

     // add to re and im and return the result
     complex & operator+=(complex z) {re += z.re, im += z.im; return * this;}
     complex & operator-=(complex z) {re -= z.re, im -= z.im; return * this;}

     complex & operator*=(complex z);    // defined out-of-class somewhere
     complex & operator/=(complex z);    // defined out-of-class somewhere
};

complex operator+(complex a, complex b);
complex operator-(complex a, complex b);
complex operator-(complex a);
complex operator*(complex a, complex b);
complex operator/(complex a, complex b);
std::ostream & operator<<(std::ostream & out, complex z);
bool operator==(complex a, complex b);
bool operator!=(complex a, complex b);
}

#endif