#include<iostream>
using namespace std;
int main(){
    int *p;
    float *q;
    char *r;
    cout<<"enter int value"<<endl;
    int it;
    cin>>it;
    p=new int(it);
    q=new float(3.4);
    r=new char('h');


    cout<<*p<<endl;
    cout<<*q<<endl;
    cout<<*r;

}