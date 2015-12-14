/*
brian mitchell
12261769
Main function for exercise3 in lab 4
*/
#include <iostream>
#include <string>
#include "MyComplex.h"

using namespace std;

int main()
{

	double real, image;// create varibles

	cout << "Please enter a real number" << endl;
	cin >> real;//real number
	cout << "Please enter an imaginary number" << endl;
	cin >> image;	//imaginary number
	MyComplex ob1(real, image);//make object with both

	
	cout << "Please enter real number?" << endl;
	cin >> real;
	cout << "Please enter imaginary number?" << endl;
	cin >> image;

	MyComplex ob2(real,image);//second object

	MyComplex sum = ob1 + ob2;//add two objects
	sum.print();//printhe value

	MyComplex diff = ob1 - ob2;//minus the two
	diff.print();//yada yada yada

	
	MyComplex product = ob1 * ob2;//multiply the two
	product.print();//product of the two

return 0;

}
