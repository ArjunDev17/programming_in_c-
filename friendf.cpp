#include<iostream>
using namespace std;
class frif
{
private:
    int a;
    int b;
    friend void add(frif);
public:
      void setVal(){
          cout<<"enter a and b value "<<endl;
          cin>>a>>b;
      }
      void show(){
          cout<<"a="<<a<<endl<<"b="<<b;
      }
};
void add(frif f1){
    //frif temp;
    cout<<"summition is"<<f1.a+f1.b;    
}
int main(){
    frif obj;
    obj.setVal();
    obj.show();
    add(obj);
    
}
