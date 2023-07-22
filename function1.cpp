#include<iostream>
using namespace std;
long swap(int,int);
int main(void){
    int a=5,b=9;
    cout<<"a is="<<a<<endl<<"b is="<<b<<endl;
    swap(a,b);
    return 0;
}
long swap(int x,int y){
    int t=0;
    t=x;
    x=y;
    y=t;
     cout<<"after swapping a="<<x<<endl<<"after swaping b="<<y;
}
