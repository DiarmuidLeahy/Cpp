#include <iostream>

using namespace std;

int main()
{
  cout << "Hello world!\n";
  int num1,num2,num3;

  int smallest = 50000000;
  int largest = 0;

  cin>>num1;
  cin>>num2;
  cin>>num3;

  int sum=num1+num2+num3;

  cout << "sum = " << sum << "\n"; 
  cout << "average = " << sum/3 << "\n";
  cout << "product = " << (num1*num2*num3) << "\n";

  if((num1>num2)&&(num1>num2)){
    largest=num1;
  }
  else if((num2>num1)&&(num2>num3)){
    largest=num2;
  }
  else{
    largest=num3;
  }

  cout << "largest = " << largest <<endl;

   if((num1<num2)&&(num1<num2)){
    smallest=num1;
  }
  else if((num2<num1)&&(num2<num3)){
    smallest=num2;
  }
  else{
    smallest=num3;
  }

  cout << "smallest = " << smallest <<endl;

}
