#include <iostream>

using namespace std;

int main(){
  cout << "enter a 5 digit number";

  int num;

  cin >> num;

  for(int i=0;i<5;i++){
    cout << num%10 << endl;
    num/=10;
  }
}
