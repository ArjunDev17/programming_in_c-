#include<iostream>
using namespace std;

int main(){
    int a = 9;
    int &b=a;
      cout<<"a="<<&a<<endl<<"b="<<&b<<endl;
    cout<<"only increment b++"<<endl;
    ++b;
    cout<<"a="<<a<<endl<<"b="<<b;
    return 0;
}