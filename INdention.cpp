#include<iostream>
using namespace std;
int main()
{
int a=5,b=7,c=9;
int big;
big=a;
if(a>b) if(a>c)  big=a;
big=c; 
if(b>a) if(b>c)  big=b;
else big =c;
cout<<big<<" is";                
return 0;   
}
    