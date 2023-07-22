#include<iostream>

using namespace std;
class Add{
    int a;
    int c;
    public:
    void input(){
        cout<<"enter  a value ";
        cin>>a;
     
    }
    void show1(){
        cout<<"a="<<a<<endl;
        
    }
    Add(){
        cout<<"let see ,paret class constructur run before derived"
              "constructur "<<endl;
    }
    Add(int y){
        c=y;
        cout<<"c="<<c<<endl;
    }
    ~Add(){
        cout<<"base class destructur run "<<endl;
    }
};
class sam :public Add{
    private:
        int b;
        int d;
    public:
        void inputSAM(){
         cout<<"enter b value ";
         cin>>b;
        }
    sam():Add(){
        cout<<"derived class constructur run "<<endl;
    }
    sam(int y,int z):Add(y){
        d=z;
        cout<<"d="<<d<<endl; 
    }
    ~sam(){
        cout<<"child class distructr run"<<endl;
    }
    void show(){
        cout<<"b="<<b<<endl;       
        
    }
};
int main(){
    sam obj;
    sam obj1();
    sam obj2(9,6);
     obj.input();
     obj.inputSAM();
     obj.show1();
     obj.show();
     return 0;
   
}