#include<iostream>
using namespace std;
class base{
    private:
        int a;
    public:
     base(int x){
         a=x;
         cout<<"a="<<a;
     }
};
class child{
    private:
     int b;
    public:
     child(int x):base(x){

     }
};