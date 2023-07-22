#include<iostream>
using namespace std;
class A;
class B{
    int a;
    friend void test(A,B);//declartion
    public:
    B(int x){
        a=x;
    }    
};

class A
{
private:
    int b;
    friend void test (A,B);
public:
    A(int y){
        b=y;
    }
};
void test(A l,B u){
if(l.b<u.a){
cout<<"greatr";
}
}


int main(){
    A obj(3);
    B obj1(9);
    test(obj,obj1);

}


