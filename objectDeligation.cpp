#include<iostream>
using namespace std;
class base{
    private:
        int num;
    public:
       /* base(){
            num=0;
            cout<<"default constructure:"<<endl;
        }*/
        base (int a){
            num=a;
            cout<<"a="<<a<<endl;
        }
};
class child{
    private:
        int b;
    public:
       // base obj;
        child (int p,int q):base(p) {
            b=q;
            cout<<"b="<<b<<endl;
        }
};
int main(){
    child cobj(7,9);
    return 0;
}