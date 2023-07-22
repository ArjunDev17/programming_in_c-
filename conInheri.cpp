#include<iostream>
using namespace std;
class b{
    private:
     int a;
    public:
           b(int u){
            a=u;
            cout<<"a="<<a; 
        }
};
class child :public b{
    private:
        int bx;
    public:
        child(int p,int q):b(p){
            bx=q;
            cout<<"b="<<bx;
        }
};
int main(){
    child obj(4,9);
    
    return 0;
}