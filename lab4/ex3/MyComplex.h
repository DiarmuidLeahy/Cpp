#include <iostream>
#include <string>
#ifndef MyComplex_H
#define MyComplex_H

using namespace std;

class MyComplex{

private:
	double real;
	double image;

public:
///////////////////constructers for overloaded functions/////////////////////////////
	friend const MyComplex operator+(const MyComplex &lhs, const MyComplex &rhs);
	friend const MyComplex operator-(const MyComplex &lhs, const MyComplex &rhs);
	friend const MyComplex operator*(const MyComplex &lhs, const MyComplex &rhs);

	MyComplex();//object
	MyComplex(double a, double b);

	double getReal();//getter for real numbers
	void setReal(double a);//setter for real numbers
	double getImage();//getter for real
	void setImage(double b);//setter for real

	void print();//print

};
#endif
