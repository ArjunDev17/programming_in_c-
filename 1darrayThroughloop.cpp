#include<iostream>
using namespace std;
#define count 50
int main(void){
    int arr[count],i,size;
    cout<<"enter the size of array "<<endl;
    cin>>size;
    cout<<"input  age: "<<endl;
    for ( i = 0; i < size; i++){
            cin>>arr[i];
    }
    cout<<"your list"<<endl;
    for ( i = 0; i < size; i++){
            cout<<"number "<<i+1<<" person age is : "<<arr[i]<<endl;
    }
    return 0;
}