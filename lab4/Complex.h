
#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex {
public:
	Complex(double a, double b);
	virtual ~Complex();
	Complex Add(const Complex &z);
	Complex Subtract(const Complex &z);
	Complex Multiply(const Complex &z);
	void print();


protected:
	double value1_;
	double value2_;

};

#endif /* COMPLEX_H_ */
