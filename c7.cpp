#include<iostream>
using namespace std;

class test{
    private:
        int a;
    public:
        void geta(){
            cout<<"enter vlaue for a: ";
            cin>>a;
        }
        void puta(){
            cout<<a;
        }
        void max(test t2){
            if(a>t2.a)
            cout<<"t1 a is greater "<<a;
            if(a<t2.a)
             cout<<"t2 a is greater "<<a;
             if(a==t2.a)
             cout<<"both are equal";
    
        }

};
int main(void){
    test t1,t2;
    t1.geta();
    t2.geta();
    t1.max(t2);//passing object
}