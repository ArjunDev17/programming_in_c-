#include<iostream>
using namespace std;
class Base{
    public:
        virtual   void display(){
           cout<<"BASE class"<<endl;
        }
};
class child:public Base{
    public:
        void display(){
            cout<<"CHILD class"<<endl;
        }
};
int main(){
    Base *ob;
    child ch;
    ob=&ch;
    ob->display();
    ((child*)ob)->display();//typcasting
    return 0;
}