#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int arr [11];

  cout << "How many times should the program run: ";
  int runs;
  cin >> runs;
  
  for(int i=0;i<11;i++)
    {
      arr[i]=0;
    }
  for(int i=0;i<runs;i++)
    {
      int num1 = (rand()%6)+1;
      int num2 = (rand()%6)+1;
      arr[(num1+num2)-2]++;
      }
  cout << "total\t\t" << "occurances\t" << "%" << endl;
  for(int i=0;i<11;i++)
    {
      cout << i+2 << "\t\t" << arr[i] << "\t\t" << (arr[i]*100)/runs << "%" << endl;
    }
}
