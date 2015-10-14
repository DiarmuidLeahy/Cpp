#include <iostream>
#include <cstring>

using namespace std;

void print_string_array(char str[]);
void print_string_ptr(char *str);

int main()
{
  char word[] = "Success!!";

  print_string_array(word);
  print_string_ptr(word);

  return 0;
}
void print_string_array(char str[])
{
  int i=0;
  while(str[i]!='\0')
    {
      cout << str[i] << endl;
      i++;
    }
}
void print_string_ptr(char *str)
{
 cout << str << endl;
}
