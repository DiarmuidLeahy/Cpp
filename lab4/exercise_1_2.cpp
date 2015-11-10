/*
 * exercise_1_2.cpp
 *
 *  Created on: Oct 18, 2012
 *      Author: se312001
 */

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include "Complex.h"

using namespace std;


int main()
{
	Complex first(1.0,2.0);
	Complex second(3.0,4.0);

	Complex add = first.Add(second);
	cout<<"Added: ";
	add.print();


	Complex sub = first.Subtract(second);
	cout<<"\nSubtracted: ";
	sub.print();

	Complex mul = first.Multiply(second);
	cout<<"\nMultiplied: ";
	mul.print();

	

	Complex first1(4.0,2.0);
	Complex second1(3.0,7.0);
	
	cout << "**values have changed***" << endl;

	Complex add1 = first1.Add(second1);
	cout<<"Added: ";
	add.print();


	Complex sub1 = first1.Subtract(second1);
	cout<<"\nSubtracted: ";
	sub.print();

	Complex mul1 = first1.Multiply(second1);
	cout<<"\nMultiplied: ";
	mul.print();

	return 0;
}
