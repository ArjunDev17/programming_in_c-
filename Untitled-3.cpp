#include<iostream>
using namespace std;

class prac{
    private:
        int a,b;
        friend void sum(prac,prac);
    public:
        void input(int x,int y){
            a=x;
            b=y;
        }    
};
 void sum(prac excep,prac excep2){
     prac obj;
     cout<<excep.a+excep2.a;
     cout<<excep.b+excep2.b;
     
        }
int main(){
    prac p1,p2; 
    p1.input(3,6);
    p2.input(4,6);
    sum(p1,p2);
    
   // p1.show();
    //p2.show();
}