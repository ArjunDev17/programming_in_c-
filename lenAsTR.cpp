#include<iostream>
#include<string.h>
using namespace std;
void len(char[]);
void len(char s[]){
    int i=0;
    while(s[i]!='\0')
    i++;
    cout<<"length "<<i;
}
int main(void){
     char str[]="family";
     len(str);
     return 0;
}