#include<iostream>
using namespace std;

class digit{
    private:
      int a,b;
     friend void add_fun(digit,add);
       public:
       void input(){
           cout<<"a and b value ";
           cin>>a>>b;
       }
               void show(){
            cout<<"a="<<a<<endl<<"b="<<b;
        }
};
 
class add{
    private:
        int c,d;
        friend void add_fun(digit,add);//declaration
        void add_input(){
           cout<<"a and b value ";
           cin>>c>>d;
       }
};
void add_fun(digit d,add o1){
    digit temp;
    temp.a=a+o1.c;
    temp.b=d.b+o1.d;

}
int main(){
    add obj1,obj2;
    digit d1;
    add_fun(d1,obj1);
    d1.show();
    d1.show();
    return 0;
    
}