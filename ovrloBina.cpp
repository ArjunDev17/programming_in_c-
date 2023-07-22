#include<iostream>
using namespace std;

class integer
{
private:
    int a,b;
public:
    void input(int x,int y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<"a= "<<a<<"  b= "<<b<<endl;
    }
  
    integer operator+(integer);
};

integer   integer:: operator+(integer ob1){
    integer temp;
    temp.a=a+ob1.a;
    temp.b=b+ob1.b;
    return temp;
}
int main(){
    integer i1,i2,i3;
    i1.input(4,5);
    i2.input(6,9);
    i3=i1+i2;//i3=i1.operator+(i2)\
             i3=i1+i2;
    i3.showData();
    return 0;
}

