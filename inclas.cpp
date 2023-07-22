#include<iostream>
 using namespace std;
 class X
 {
 private:
     int a;
     void f1();
protected:
    int b;
    void f2(){
        b=c;
        cout<<c;
    }
public:
    int c; 
     void f3(){
         a=c;
         if ( a > 0)
     {
       cout<<"positive";
     }
         cout<<a;
    }   

 };
 class dr:public X{
     private:
        int b;
    public:
        void input (int n){
                b=n;
                 int s=c+b;
            cout<<" "<<s;
        }
        void sum(){
           
    }


 };
 int main(){
     int temp;
     X obj1;
     dr boj1;
     boj1.input(6);
     obj1.c=4;
     obj1.f3();
     boj1.sum();
     //obj1.f2();
    // obj1.f1();

 }
 

 
 