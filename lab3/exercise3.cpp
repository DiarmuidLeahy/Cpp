#include <iostream>
#include <string>

using namespace std;

struct person
{
  string name;
  int age;
};

int main()
{
  int num;
  cout << "how many people are you going to add?" << endl;
  cin >> num;
  person *pArray = new person[num];

  for(int i=0;i<num;i++)
    {
      cout << "Enter the name:" << endl;
      cin >> pArray[i].name;
      cout << "Enter the age:" << endl;
      cin >> pArray[i].age;
    }

  for(int i=num-1;i>=0;i--)
    {
      cout << "Name: " << pArray[i].name << ",Age:" << pArray[i].age << endl;
    }
}
