#include<stdio.h>
#include<iostream>
using namespace std;

int main()  { 
   char **s; 
   char foo[] = "Hello World";
   char * tmp=foo;

   s = &tmp; 

   cout<<s<<" "<<*(s)<<" "<<*(*(s))<<'\n';
   cout<<s[0]<<" "<<*(s[0]);
   return 0;
}

/*
  code nay sua lai nhu tren la ok
*/

