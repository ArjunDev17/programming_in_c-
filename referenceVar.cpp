#include<iostream>
using namespace std;
int main(){
    int a;
    int &b=a;
    cout<<"enter b value ";
    cin>>b;
    cout<<"b value increse"<<endl;
    b++;
    cout<<"a value increse"<<endl;
    a++;
    cout<<"b="<<b<<" a="<<a;
    return 0;

}
/* int a;
    int &b=a;
    cout<<"enter b value ";
    cin>>b;
    cout<<b<<" a="<<a;*/