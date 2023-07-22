#include<iostream>
using namespace std;
class ovr{
    int a,b;
    public:
     void setValue(int x,int y){
         a=x;
         b=y;
        }
        void show(){
            cout<<"a="<<a<<endl<<"b="<<b;
        }
        ovr operator+(ovr);          //ovr add(ovr );      
};
     ovr ovr::operator+(ovr Obj) {        //ovr ovr:: add(ovr Obj){
          ovr temp;                          //ovr temp;
          temp.a=a+Obj.a;                     //temp.a=a+Obj.a;
          temp.b=b+Obj.b;               //temp.b=b+Obj.b;
          return temp;                     //  return temp;
}
int main(){
    ovr obj,obj1,obj2;
    obj1.setValue(6,8);
    obj2.setValue(4,9);
     obj=obj1+obj2;            // obj=obj1.add(obj2);
    obj.show();
    return 0;
}