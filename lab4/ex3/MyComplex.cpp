#include <iostream>
#include <string>
#include "MyComplex.h"
#include <cstdlib>

using namespace std;

///////////////******CONSTRUCTERS***********////////////////////////////
MyComplex::MyComplex():real(0),image(0)//constructer
{
}

MyComplex::MyComplex(double a, double b):real(a),image(b) //parameters in the constructer
{
}
///////////////////*******GETTER AND SETTER METHODS**********///////////	
double MyComplex::getReal() //get real number
{
	return real;
}
void MyComplex::setReal(double a) //set real
{
	real = a;
}
double MyComplex::getImage()//get image number 
{
	return image;
}

void MyComplex::setImage(double b) //set image number
{
	image = b;
}

///////////////////*****PRINT FUNCTION*******////////////////////
void MyComplex::print()
{
	cout << real << " + " << image << "i" << endl;
}

/////////////////******OVERLOADED PLUS*********//////////////////
const MyComplex operator+(const MyComplex &lhs, const MyComplex &rhs) {
	MyComplex add;
	add.setReal(lhs.real + rhs.real);
	add.setImage(lhs.image + rhs.image);
	return add;
}

/////////////////******OVERLOADED MINUS*********//////////////////
const MyComplex operator-(const MyComplex &lhs, const MyComplex &rhs) {
	MyComplex minus;
	minus.setReal(lhs.real - rhs.real);
	minus.setImage(lhs.image - rhs.image);
	return minus;
}

/////////////////******OVERLOADED multiplication*********//////////////////
const MyComplex operator*(const MyComplex &lhs, const MyComplex &rhs) {
	MyComplex star;
	star.setReal(lhs.real * rhs.real);
	star.setImage(lhs.image * rhs.image);
	return star;
}
