#include<iostream>
using namespace std;

class ovrRid{
    int a;
   
    public:
    void input(int x){
        a=x;
        cout<<"a= "<<a<<"  Base class function"<<endl;
    }
};
class add :public ovrRid{
    private:
        float b;
    public:
    void input (){
        ovrRid::input(5);
        cout<<"enter value of b "<<endl;
        cin>>b;
        cout<<"b="<<b<<" derived class function "<<endl;
    }
};
int main(){
    int t;
    add obj1;
    obj1.input();
    //..\
        obj1.input(3); error because compliler is not going to check\
        base class it only see in child class and here fun not \
        take any argument ..  
    //obj1.ovrRid::input(4);//now it go base class and run properly..
   
    return 0;
}