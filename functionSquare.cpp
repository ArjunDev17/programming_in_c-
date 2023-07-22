#include<iostream>
using namespace std;
inline int square(int);
int main(void){
    int a=6,b=9,c1,c2;
    c1=square(a);
    cout<<"square is  "<<c1;
     c2=square(b);
    cout<<"\nsquare is "<<c2;
    return 0;
}
int square(int num){
    return num*num;
}