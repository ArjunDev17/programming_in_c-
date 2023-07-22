#include<iostream>
#include <string.h>
using namespace std;
int main(){
    int i,se,found=0;
    int arr[]={10,21,23,34,45,65};
    cout<<"Enter your search element"<<endl;
    cin>>se;
    for(i=0;i<6;i++){
        
        if (arr[i]==se){
            cout<<"Element fond"<<i;
            found++;
        }

    }
    if(found==1){
        cout<<"\nGreat";
    }
    else{
        cout<<"Not found";
    }
}

