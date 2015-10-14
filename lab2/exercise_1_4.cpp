#include <iostream>
#include <cstring>

using namespace std;

int my_string_len(char str[]);
void my_string_cat(char dest[], char src[], int dest_size);

int main()
{
  char string1 [] = "Diarmuid";
  char string2 [] = "Leahy";
  
  my_string_cat(string1, string2, 10);

  return 0;
}
int my_string_len(char str[])
{
  int size = 0, i =0;
  while(str[i]!='\0')
    {
      size++;
      i++;
    }
  return size;
}
void my_string_cat(char dest[], char src[], int dest_size)
{
  if(dest_size>=(my_string_len(dest)+my_string_len(src)))
    {
      strcat(dest, src);
      cout << dest << endl;
    }
    else
      {
	cout << "error" << endl;
      }
}

