#include<iostream>
#include<string.h>
using namespace std;
void com(char [],char []);
void com(char s[],char s1[]){
    int i;
    for ( i = 0; s[i]==s1[i]; i++)
    if(s[i]!='\0')
    cout<< 0;
    cout<<s[i]-s1[i];
}
int main(void){
    int i;
     char str[]="family";
     char str1[]="fam";  
     com(str,str1);
     return 0;
}
/* for ( i = 0;pstr[i]!='\0'; i++)
     {
          cout<<pstr[i];
     }*/