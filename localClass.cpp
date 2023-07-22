#include<iostream>
using namespace std;

void local_Cfun(){
    class add{
        int a,b;
        public:
         void setData(int x,int y){
             a=x;
             b=y;
             cout<<"a="<<a<<endl<<"b="<<b;
         }
    };
    add d1;
    d1.setData(4,5);
}
int main(){
local_Cfun();
return 0;
}