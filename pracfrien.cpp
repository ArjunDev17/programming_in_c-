#include<iostream>
using namespace std;

class prac{
    private:
        int a,b;
        friend void sum(prac);
    public:
        void input(int x,int y){
            a=x;
            b=y;
        }
       
};
 void sum(prac excep){
            cout<<excep.a+excep.b;
        }
int main(){
    prac p1,p2;
    
  
    p1.input(3,6);
    sum(p1);
   // p1.show();
    //p2.show();
}