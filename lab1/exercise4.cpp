#include <iostream>

using namespace std;

int main(){

  int acc, bal, total, credit, limit;
  do{
    cin >> acc >> bal >> total >> credit >> limit;
    bal = bal+total-credit;
    if(bal>limit){
      cout << acc << " : credit limit exceeded" << endl;
    }
  }while(acc != -1);
    
}
