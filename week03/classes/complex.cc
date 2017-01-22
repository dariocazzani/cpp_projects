#include "complex.hpp"
#include <iostream>

namespace our_complex {
complex & complex::operator*=(complex z)
{
	const double tmp_re {re};
	re = re * z.re - im * z.im;
	im = tmp_re * z.im + im * z.re;
    return * this;
}

complex & complex::operator/=(complex z)
{
	const double denominator {1.0 / (z.re * z.re + z.im * z.im)};
	const double tmp_re {re};
    re = (re * z.re + im * z.im) * denominator;
    im = (im * z.re - tmp_re * z.im) * denominator; 
    return * this;
}

complex operator+(complex a, complex b) {return a += b;}
complex operator-(complex a, complex b) {return a -= b;}
complex operator-(complex a) {return {-a.real(), -a.imag()};}     // unary minus
complex operator*(complex a, complex b) {return a *= b;}
complex operator/(complex a, complex b) {return a /= b;}
std::ostream & operator<<(std::ostream & out, complex z)
{
    out << "(" << z.real() << ", " << z.imag() << ")";
    return out;
}

bool operator==(complex a, complex b)          // equal
{
     return a.real() == b.real() && a.imag() == b.imag();
}

bool operator!=(complex a, complex b)          // not equal
{
     return !(a == b);
}
}
