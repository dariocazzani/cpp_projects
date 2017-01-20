#include "complex.hpp"
#include "vector.hpp"

#include <cassert>
#include <chrono>
#include <complex>
#include <iostream>
#include <sstream>

namespace {

void f(std::complex<double> z)
{
    std::complex<double> a {2.3};        // construct {2.3, 0.0} from 2.3
    std::complex<double> b {std::complex<double> {1} / a};
    std::complex<double> c {a + z * std::complex<double> {1, 2.3}};
     // ...
     if (c != b)
         c = -(b / a) + std::complex<double> {2} * b;

     std::cout << "a = " << a << "\n";
     std::cout << "b = " << b << "\n";
     std::cout << "c = " << c << "\n";
}

void f(our_complex::complex z)
{
    our_complex::complex a {2.3};        // construct {2.3, 0.0} from 2.3
    our_complex::complex b {1 / a};
    our_complex::complex c {a + z * our_complex::complex {1, 2.3}};
     // ...
     if (c != b)
         c = -(b / a) + 2 * b;

     std::cout << "a = " << a << "\n";
     std::cout << "b = " << b << "\n";
     std::cout << "c = " << c << "\n";
}

void use_complex()
{
    std::complex<double> c1 {4, 5};
    std::complex<double> c2 {10, 20};
    std::cout << "c1 = " << c1 << "\n";
    std::cout << "c2 = " << c2 << "\n";
    std::cout << "c1 * c2 = " << c1 * c2 << "\n";

    our_complex::complex our_c1 {4, 5};
    our_complex::complex our_c2 {10, 20};
    std::cout << "our_c1 = " << our_c1 << "\n";
    std::cout << "our_c2 = " << our_c2 << "\n";
    std::cout << "our_c1 * our_c2 = " << our_c1 * our_c2 << "\n";

    std::cout << "c1 / c2 = " << c1 / c2 << "\n";
    std::cout << "our_c1 / our_c2 = " << our_c1 / our_c2 << "\n";

    std::cout << "our_c1 = " << our_c1 << "\n";
    std::cout << "our_c2 = " << our_c2 << "\n";

    std::cout << "our_c1 != our_c2: " << (our_c1 != our_c2 ? "True" : "False") << "\n";

    std::cout << "----------------------------\n";
    std::cout << "f(c1):\n";
    f(c1);
    std::cout << "----------------------------\n";
    std::cout << "f(our_c1):\n";
    f(our_c1);
}

void fct(int n)
{
     Vector v(n);

     std::cout << "at start: v.size() = " << v.size() << "\n";

     {
           Vector v2(2 * n);
           std::cout << "v2.size() = " << v2.size() << "\n";
     } // v2 is destroyed here

     std::cout << "at end: v.size() = " << v.size() << "\n";
} // v is destroyed here

Vector read(std::istream & is)
{
    Vector v(0);
    std::cout << "Enter values to vector:\n";
    for (double d; is >> d;)      // read floating-point values into d
          v.push_back(d);         // add d to v
    return v;
}

void use_vector()
{
    fct(4);

    Vector a = read(std::cin);
    std::cout << "Vector a = ";
    for (int i = 0; i < a.size(); ++i)
        std::cout << a[i] << " ";
    std::cout << "\n";

    Vector v1 = {1, 2, 3, 4, 5};          // v1 has 5 elements
    std::cout << "\nVector v1 = ";
        for (int i = 0; i < v1.size(); ++i)
            std::cout << v1[i] << " ";
        std::cout << "\n";
    Vector v2 = {1.23, 3.45, 6.7, 8};     // v2 has 4 elements
    std::cout << "Vector v2 = ";
        for (int i = 0; i < v2.size(); ++i)
            std::cout << v2[i] << " ";
        std::cout << "\n";

}

void do_work()
{
    Vector v(0);
    for (int i = 0; i < 10000; ++i)
        v.push_back(i);
}

void test_time()
{
    auto t0 = std::chrono::high_resolution_clock::now();
    do_work();
    auto t1 = std::chrono::high_resolution_clock::now();
    std::cout << "do_work() took " << std::chrono::duration_cast<std::chrono::milliseconds>(t1-t0).count() << "msec\n";
}

}

// valgrind ./test_classes 2
int main(int argc, char **argv)
{
    assert(argc == 2);
    std::istringstream iss (argv[1]);
    int val;
    if ((iss >> val) && iss.eof()) {
        switch (val) {
        case 1: use_complex();
                break;
        case 2: use_vector();
                break;
        case 3: test_time();
        }
    }
}