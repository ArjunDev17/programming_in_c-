#include<iostream>
using namespace std;
class base{
    private:
        int num;
    public:
            base(int a){
            num=a;
            cout<<"a="<<a<<endl;
        }
};
class child{
    private:
        int b;
    public:
        child (int p,int q):base(p) {
        b=q;
        cout<<"b="<<b<<endl;
    }
};
int main(){
    child cobj(7,9);
    return 0;
}