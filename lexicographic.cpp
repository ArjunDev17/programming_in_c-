#include<iostream>
#include<string.h>
const int LEN=15;
using namespace std;
int main(void){
    int i,k;
    char temp[30];
    char persion[3][LEN]={"Ram","Army","airFo"};
    cout<<"persion list is"<<endl;
    cout.width(2);
    k=1;
    while(k<3){
     for ( i = 0; i < 3-k; i++){
         if(strcmp(persion[i-1],persion[i])>0){
             strcpy(temp ,persion[i-1]);
             strcpy(persion[i-1],persion[i]);
             strcpy(persion[i],temp);
            }   
        }
     k=k+1;
    }
    cout<<"\nstrring is: \n";
    for ( i = 0; i < 3; i++)
    cout<<persion[i]<<endl;

}