#include<iostream>
using namespace std;
class b{
    private:
     int a;
    public:
      b(){

      }
        b(int u){
            a=u;
            cout<<"a="<<a; 
        }
 void show(){
    
 }
};
class child{
    private:
        int b;
    public:
        child(int p,int q):b(p){
            b=q;
            cout<<"b="<<b;
        }
};
int main(){
    child obj(4,9);
    
    return 0;
}