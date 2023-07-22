#include<iostream>
using namespace std;

void swapValue(int *a,int *b);

int main(){

   int a = 100;
   int b= 200;

   cout<<"First number is "<<a;
   cout<<"Second Number is "<<b;

  
   swapValue(&a,&b);

   cout<<"After swap function \n";
   cout<<"vale "<<a<<endl<<b;
}
void swapValue(int *x,int *y){

      int temp;
      temp = *x; 
      *x=*y;
      *y=temp;
 
}