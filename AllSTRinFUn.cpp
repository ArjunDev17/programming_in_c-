#include<iostream>
#include<string.h>
const int LEN=15;
using namespace std;
int main(void){
    int i,count;
    char persion[10][LEN];
    cout<<"how many persion in list"<<" ";
    cin>>count;
    
    for ( i = 0; i < count; i++){
        cout<<"enter persion"<< i+1 <<"name: ";
        cin>>persion[i];  
    }
    cout<<"----------------------------------------------------\n";
    cout<<"P#   PersionName  Length  InlowerCase InUpperCase \n";
    cout<<"-----------------------------------------------------\n ";
    for ( i = 0; i < count; i++){
        cout.width(2);
        cout<<i+1;
        cout.width(LEN);
        
        cout<<persion[i]<<"  ";
        cout.width(2);
        cout<<strlen(persion[i])<<"  ";
        cout.width(LEN);
        cout<<strlwr(persion[i])<<"  ";
        cout.width(LEN);
        cout<<strupr(persion[i])<<endl;
        
    }
   return 0;
}