#include<iostream>
#include<string.h>
void  mY_lenFunc(char[]);
using namespace std;
void  mY_lenFunc(char leN[]){
    int i;
    for ( i = 0; leN[i]!='\0'; i++);
    cout<< "legth is string--> "<<i;
}
int main(void){
    char str[]="mYstartinGpoiT";
    mY_lenFunc(str);    
    return 0;
}

/* size=strlen(str);*/