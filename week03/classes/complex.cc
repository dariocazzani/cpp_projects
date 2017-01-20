#include "complex.hpp"

namespace our_complex {
complex & complex::operator*=(complex z)
{
    (void) z;
    return * this;
}

complex & complex::operator/=(complex z)
{
    (void) z;
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
