#include <cmath>
#include "complex.hpp"

complex::complex(double r,double i): re(r), im(i) {}
double complex::abs()const{ return std::sqrt(re*re+im*im); }
std::string complex::to_str()const{ return std::to_string(re)+"+"+std::to_string(im)+"i"; }