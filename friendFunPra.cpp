#include<iostream>
using namespace std;
class add;//forwerd declaration
class digit{
    private:
      int a,b;
     friend digit add_fun(digit,add);
       public:
       void setDig(){
            cout<<"enter the value of a and b:"<<endl;
            cin>>a>>b;
       }
        void show(){
            cout<<"a="<<a<<endl<<"b="<<b;
        }
}; 
class add{
    private:
        int c,d;
        int A,B;
        friend digit add_fun(digit,add);//declaration
        public:
         void show2(){
                cout<<"A="<<A<<"B="<<B;    
         }
};
digit add_fun(digit d1 ,add o1){
    cout<<d1.a+o1.c;
    add temp;
      temp.A=d1.a+o1.c;
        temp.B=d1.b+o1.d;
        return temp;
}
int main(){
    add obj1,obj2,ob3;
    digit d1;
    ob3=add_fun(d1,obj1);
    d1.show();
    d1.show();
    return 0;
    
}