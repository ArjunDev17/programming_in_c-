#include<iostream>

using namespace std;
class Add{
    int c;
    public:
       Add(int y){
        c=y;
        cout<<"c="<<c<<endl;
    }
   
};
class sam :public Add{
    private:
        int b;
        int d;
    public:
        sam(int y,int z):Add(y){
        d=z;
        cout<<"d="<<d<<endl; 
    }
 
};
int main(){
    sam obj1();
    sam obj2(9,6);
     
     return 0;
   
}