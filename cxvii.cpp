#include<iostream>
using namespace std;
#define count 5
int main(){
    int *p,i,n;
    cout<<"enter the number";
    cin>>n;
    for ( i = 0; i < count; i++)
    {
         p=new int[i]; 
    }
    for ( i = 0; i < count; i++)
    cout<<p[i]<<endl;
   return 0;
}