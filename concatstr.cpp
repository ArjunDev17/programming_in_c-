#include<iostream>
#include<string.h>
using namespace std;
void conCAT(char[],char[]);
void conCAT(char s1[],char s2[]){
    int i,j;
    while (s1[i]!='\0')
        i++;
        while(s1[i++]=s2[j++]);
        //return s1;
        for ( i = 0; s1[i] !='\0'; i++)
        {
            cout<<s1[i];
        }
        
       
}
 int main(void){
    int i,size;
    char str[]="mYstartinGpoiT";
    char str1[]="next";
    conCAT(str,str1);
    return 0;
}
/* for ( i = 0 ; str1[i]!='\0'; i++)
    {
        cout<<str1[i];
    }
     for ( i = 0 ; str[i]!='\0'; i++)
    {
        cout <<str[i];
    }*/
