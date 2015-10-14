#include <iostream>

using namespace std;

int gcd(int a, int b)
{
  if(b==0)
    {
      return a;
    }
  else
    {
      return gcd(b, a%b);
    }
}

int main()
{
  int x,y;
  cout << "Enter first number" << endl;
  cin >> x;
  cout << "Enter second number" << endl;
  cin >> y;
  
  cout << "The greatest common divisor is : " << gcd(x,y) << endl;
}
