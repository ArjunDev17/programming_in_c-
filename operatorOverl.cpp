#include<iostream>
using namespace std;

class integer
{
private:
    int a,b;
public:
    integer(int,int);
    integer();
    void showData(){
        cout<<"a="<<a<<"  b="<<b<<endl;
    }
    integer add(integer ob1);
};
integer :: integer(int x,int y){    
        a=x;
        b=y;
    }
integer integer :: add(integer ob1){
    integer temp;
    temp.a=a+ob1.a;
    temp.b=b+ob1.b;
    return (temp);
}
int main(){
    integer i1(4,5),i2(6,9),i3;
    i3=i1.add(i2);
    i3.showData();
    return 0;
}

