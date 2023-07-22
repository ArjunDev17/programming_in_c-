#include<iostream>
#include <string.h>
using namespace std;
int Bsh(int[],int);
int main(){
    int i,se,found=0;
    int BinSerch;
    int arr[]={10,21,23,34,45,65};
    cout<<"Enter your search element "<<endl;
    cin>>se;
    int mid,low,high;
    
    BinSerch=Bsh(arr,se);//Method call
    if(BinSerch!=-1){
        cout<<"Element fond "<<i;
    }
}
int Bsh(int Lis[],int SE){
    int i,found;
    for(i=0;i<6;i++){
        
        if (Lis[i]==SE){
            cout<<"Element fond "<<i;
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

