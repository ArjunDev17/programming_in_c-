#include<iostream>
 using namespace std;
 class pracfrien1
 {
 private:
     int a,b;
 public:
     pracfrien1();
     friend void input(pracfrien1);
     void show(){
         cout<<"a="<<a<<"  b="<<b;
     }
 };
 void input(pracfrien1){
     pracfrien1 o1;
     o1.a=
 }
