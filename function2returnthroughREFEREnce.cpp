#include<iostream>
using namespace std;
int& max(int &x,int &y);
int main(void){
    int a,b,c;
    cout<<"enter two integer";
    cin>>a>>b;
    max(a,b)=45;
    cout<<"after calling\n";
    cout<<"a="<<a<<"\nb="<<b;
    return 0;
}
int& max(int &x,int &y){
    if(x>y)
    return x;
    else
    return y;
    
}
