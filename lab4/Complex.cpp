
#include <iostream>
#include <stdlib.h>
#include "Complex.h"
using namespace std;

Complex::Complex(double a, double b)
{
	value1_ = a;
	value2_ = b;
}

Complex Complex::Add(const Complex &z)
{
	Complex added(this->value1_ + z.value1_, this->value2_ + z.value2_);
	return added;
}

Complex Complex::Subtract(const Complex &z)
{
	Complex subtracted(this->value1_ - z.value1_, this->value2_ - z.value2_);
	return subtracted;
}

Complex Complex::Multiply(const Complex &z)
{
	Complex multi(0,0);
	multi.value1_ = (this->value1_ * z.value1_) + (-1 * (this->value2_ * z.value2_));
	multi.value2_ = (this->value1_ * z.value2_) + (this->value2_ * z.value1_);

	return multi;

}

void Complex::print()
{
	cout<<"("<<this->value1_<<", "<<this->value2_<<")"<<endl;
}

Complex::~Complex() {

}
