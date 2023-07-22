#include<stdio.h>
int main(){
    int i,small=0,temp=0;
    int arr[]={12,5,3,8,2,9};
    printf("Your array is:\n");
    small=arr[0];
    printf("%d:",small);
    for(i=0;i<6;i++){
        if(small<arr[i]){
            temp=arr[i];

        }
        printf("\n%d ",arr[i]);
    }
    
}