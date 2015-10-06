
#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int num){
    if(num == 2) return false;
    if(num % 2 == 0) return false;
    for (int i = 3; i*i <= num; i+=2){
        if(num%i==0) return false;
    }
    return true;
}

int main(){
  for(int i=3;i<=1000;i++)
    {
      if(isPrime(i)){
	cout<< i << endl;
      }
    }
}

