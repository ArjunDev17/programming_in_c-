#include<iostream>
using namespace std;
#define count 4
int main(void){
    int i,j,temp;
    int arr[4]={4,2,8,3};
    for (i = 0; i < count-1; i++){
        for(j=0;j<count-1-i;j++){
              if (arr[j]>arr[j+1]){
                 temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;    
            }
            
        }
         for (i = 0; i < count; i++)
        cout<< " "<<arr[i];
    }
    return 0;
}