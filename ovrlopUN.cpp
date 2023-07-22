#include<iostream>
using namespace std;

class integer
{
private:
    int a;
public:
    void input(int x){
        a=x;
    }
    void showData(){
        cout<<"a= "<<a<<endl;
    }
  
    integer operator-();
};

integer   integer:: operator-(){
    integer temp;
    temp.a=-(a);
    return temp;
}
int main(){
    integer i1,i2,i3;
   
    i2.input(9);
   
    i2.showData();
   i3=-i2;
   // i3=i2.operator-();\
   
    cout<<"after unary opration "<<endl;
    i3.showData();
    return 0;
}

