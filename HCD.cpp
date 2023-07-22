#include<iostream>
using namespace std;
int gcd(int,int);
int main(){
    int num1,num2;
    cout<<"Enter number\n";
    cin>>num1>>num2;
    int equi;
    equi=gcd(num1,num2);
    cout<<equi;
    return 0;
}
int gcd(int x,int y){
    if(x==0)
    return y;
    else
    return gcd(y,x %y);
}