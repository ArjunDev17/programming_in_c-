#include<iostream>
using namespace std;
class Parent{
    public:
    void setDisplay(){
     cout<<"Parent class method\n";
    }
};
class Child : public Parent{
public :
    void setDisplay(){
    cout<<"Child class method\n";
    } 
};
int main(){
   Parent *p1;  
    Child c1;
    p1=&c1;
    p1->setDisplay();
    c1.setDisplay();
   // Parent(c1).setDisplay();
   // c1.setisplay();
}