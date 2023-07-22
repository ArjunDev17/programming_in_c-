#include<iostream>
using namespace std;

class test{
    private:
        int a;
        void input(){
        cout<<"enter vlaue for a: ";
        cin>>a;
    public:
        void geta(){
        a=void input();
        }
       
        void max(test t1,test t2){
            if(t1.a>t2.a)
            cout<<"t1 a is greater "<<t1.a;
            if(t2.a<t2.a)
             cout<<"t2 a is greater "<<t2.a;
             if(t1.a==t2.a)
             cout<<"both are equal";
    
        }

};
int main(void){
    test t1,t2,t3;
    t1.geta();
    t2.geta();
    t3.max(t1,t2);//passing object
}