#include<iostream>
using namespace std;
class add;
class prac{
    private:
        int a;
        friend void sum(prac,add);
    public:
        void input(int x){
            a=x;
        }    
};
class add{
    int b;
      friend void sum(prac,add);
    public:
        void input(int y){  
            b=y;
        } 
};
 void sum(prac excep,add excep2){
     cout<<excep.a+excep2.b;
    }
int main(){
    prac p1; 
    add a1;
    p1.input(3);
    a1.input(5);
    sum(p1,a1);
   return 0;
}