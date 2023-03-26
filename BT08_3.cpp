#include<iostream>
using namespace std;

void swap_pointers(char* &x, char* &y)
{
   char *tmp=NULL;
   tmp = x;
   x = y;
   y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   swap_pointers(s1,s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}
/*
  code tren sai la do ta chua truyen tham chieu vao ham void, ta can them tham chieu o ham void nhu da sua
*/