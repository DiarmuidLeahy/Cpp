#include <iostream>

using namespace std;

void mySwap(int &a, int &b)
{
  a-=b;
  b+=a;
  a=b-a;
}
 
int main()
{
  int num1, num2;
  cout << "enter the first number" << endl;
  cin >> num1;
  cout << "enter the second number" << endl;
  cin >> num2;
  cout << num1 << "\t" << num2 << endl;
  mySwap(num1,num2);
  cout << num1 << "\t" << num2 << endl;
}
  
