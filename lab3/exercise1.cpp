#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int size;
  cout << "enter a size\n";
  cin >> size;
  double arr[size];

  for(int i=0;i<size;i++)
    {
      cin >> arr[i];
    }
  cout << "\nREVERSED!\n";
  for(int i=size-1;i>=0;i--)
    {
      cout << arr[i] << endl;
    }
  return 0;
}
