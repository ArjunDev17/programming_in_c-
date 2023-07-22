#include<iostream>
using namespace std;

class retObj
{
 private:
    int a;
    int b;
 public:
    void setData(){
        cout<<"enter a and b value ";
        cin>>a>>b;
    }
    void showDa(){
        cout<<a<<endl<<b<<endl;
    }
    retObj sum(retObj ob1){
        retObj obj3;
        obj3.a=a+ob1.a;
        obj3.b=b+ob1.b;
        return obj3;
    }
};
int main(void){
    retObj ob1,ob2,ob;
    ob1.setData();
    ob2.setData();
    cout<<"ob1 data"<<endl;
    ob1.showDa();
    cout<<"ob2 data"<<endl;
    ob2.showDa();
    cout<<"ob data"<<endl;
    ob=ob2.sum(ob1);
    ob.showDa();
}


