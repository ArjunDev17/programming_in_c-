#include<iostream>
using namespace std;
int main(){
    int a=5,*p;
    float b,*bp;
    void *d_poi;
    d_poi=&a;
    cout<<"out "<<*((int*)d_poi)<<endl;
d_poi=&b;
cout<<"out2 "<<*((int *)d_poi)<<endl;
    p=&a;
    a=*p+1;
    cout<<a;
    return 0;
}