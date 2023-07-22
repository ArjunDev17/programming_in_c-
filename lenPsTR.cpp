#include<iostream>
#include<string.h>
using namespace std;
void len(char*[]);
void len(char *s){
    int i=0;
    while(*s !='\0')
{
    s++;
    i++;
}
    cout<<"length "<<i;
}
int main(void){
    int i;
     char str[]="family";
     char *pstr;
     pstr=str;    
    len(pstr);
     return 0;
}
/* for ( i = 0;pstr[i]!='\0'; i++)
     {
          cout<<pstr[i];
     }*/