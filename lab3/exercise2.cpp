#include <iostream>
#include <cstring>

using namespace std;
int size = 3;
double *arr = new double[size];

int main()
{

  int i =0;
  
  while(true)
    {
      cout << "enter number " << (i+1) << endl;
      cin >> arr[i];
      if(arr[i]==-1)
	{
	  for(int j=i-1;j>=0;j--)
	    {
	      cout << arr[j] << endl;
	    }

	  return 0;
	}
      if(i==size-1)
	{
	  size = size * 2;
	  double* newArr = new double[size];
	  
	  memcpy(newArr, arr, sizeof(double)*size);

	  delete [] arr;
	  arr = newArr;
	}
      i++;
    }
}

   

