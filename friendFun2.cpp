#include<iostream>
using namespace std;
 
 class b;//forword declaration
 class friendFun2
 {
 private:
     int a;
 public:
 void input(){
     cout<<"enter value of a =";
     cin>>a;
    }
     friend void set(friendFun2,b);//declare
 };
 class b
 {
 private:
     int c;
 public:
 void input(){
  cout<<"enter value of c =";
       cin>>c;
 }
        friend void set(friendFun2,b);
};
void set(friendFun2 obj1,b obj2){//deafine
        cout<<"sum is "<<obj1.a+obj2.c<<endl;
}
 int main(){
     friendFun2 obj;
     b b_obj;
     obj.input();
     b_obj.input();
     set(obj,b_obj);
     return 0;
 }