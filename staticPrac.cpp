#include<iostream>
using namespace std;
class test{
    private:
     int a;
     static int b;    ///prive static
    public:
    static int c;
    test(){
        a=4;
    }
    static void inST(int x){/// static member function
            b=x;
    }
     void show(){ 
         cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c;
     }
     
};
  int test::b;   //int test ::b=9;private
  int test::c;  //int test::c=10; public           
int main(){
    test::c=10;//public;
    test::inST(9);//private area
    test ob1;
    ob1.show();
    return 0;
}