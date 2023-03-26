#include<iostream>
using namespace std;
int main( )
{ 
   
   /*char a[4] = "abc"; 
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   } 
   return 0;
   */
}
//a chuong trinh chay binh thuong duyet cac phan tu con tro trong char, moi vi tri trong con tro cach nhau 1byte
/*
  b,
  int a[5]={1,2,3,4,5};
   for(int* p=a;(*p)!=NULL;p++)
   {
    cout<<(void*) p<<" : "<<(*p)<<endl;
   }
   c,  double a[5] = {4.2,5.10,6.2415,12.923,66.2};
    double *p = a;
    for(int i = 0 ;i < 5; i ++){
        cout<<(void*) p <<" : "<<(*p)<<endl;
        p++;
    }
*/