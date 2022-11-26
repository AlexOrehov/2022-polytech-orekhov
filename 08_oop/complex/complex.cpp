#include <cmath>
#include "complex.h"
#include <doctest.h>


const Complex Complex::operator+(const Complex rv) const
{
	return Complex(a + rv.a, b + rv.b);
}
const Complex Complex::operator-(const Complex rv) const
{
	return Complex(a - rv.a, b - rv.b);
}
const bool Complex::operator==(const Complex rv) const
{
	return a == rv.a && b == rv.b;
}
const double Complex::abs() const
{
	return sqrt(a * a + b * b);
}