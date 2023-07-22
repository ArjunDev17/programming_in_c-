#include<iostream>
using namespace std;

class ovrLoad{
    int a;
    float b;
    public:
    void input(){
        cout<<"fist function without argument"<<endl;
    }
    void input(int x){
                a=x;
                cout<<"function with argument"<<endl;
                cout<<"a="<<a<<endl;
    }
    int input (int m,int f){
        a=m;
        b=f;
        int c=a+b;
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
        return c;

    }
};
int main(){
    int t;
    ovrLoad obj1;
    obj1.input();
    obj1.input(3);
   t= obj1.input(9,19);
    cout<<t;
    return 0;
}