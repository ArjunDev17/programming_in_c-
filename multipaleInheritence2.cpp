#include<iostream>
using namespace std;
class digit{

 private:
   
 public:
  int a,b;
    digit(int x,int y){
        a=x;
        b=y;
    }
 void show(){
     cout<<"First digit is-"<<a<<endl;
     cout<<"Second digit is-"<<b<<endl;
    }
};
class calcu:public digit{
    private:
        int c;
    public:
       calcu(int u,int v):digit(u,v){
            cout<<"run child constructor"<<endl;
        }
}
 