#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter number upto you want Fabonacci series "<<endl;
    cin>>size;
int a=0;
int b=1;
cout<<"Your fabonacci Series is...."<<endl;
cout<<a<<" "<<b;
for (int i = 0; i < size; i++)
{
    int c=a+b;
    cout<<" "<<c;
    a=b;
    b=c;
}

}

