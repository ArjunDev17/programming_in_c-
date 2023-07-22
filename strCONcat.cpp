#include<iostream>
#include<string.h>
int  mY_lenFunc(char[]);
using namespace std;
 int mY_lenFunc(char leN[]){
    int i;
    for ( i = 0; leN[i]!='\0'; i++);
    cout<< "legth is string--> "<<i<<endl;
}
int main(void){
    int i,size;
    char str[]="mYstartinGpoiT";
    char str1[]="next";
    size=mY_lenFunc(str);  

    for ( i = 14 ; str1[i]!='\0'; i++)
    {
        cout<<str1[i];
    
     
    }
    return 0;
}

/* size=strlen(str);*/