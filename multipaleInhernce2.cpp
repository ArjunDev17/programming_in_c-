#include<iostream>
using namespace std;
class digit{

 private:
   int a,b;
 public:
  
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
};
int main(){
    calcu c1(4,9);
    c1.show();
}
 