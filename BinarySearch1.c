#include<stdio.h>
int main(){
    int arr[5],i,SE,low,mid,high;
    printf("Enter a Sorted array:\n");{
    for ( i = 0; i < 5; i++)
        scanf("%d",&arr[i]);
    }
    printf("Your Soted array is:\n");{
    for ( i = 0; i < 5; i++)
        printf("%d ",arr[i]);
    }
    printf("\nEnter you Search Element: ");
    scanf("%d",&SE);
    low = 0;
    high=5 - 1;
    mid=(low+high)/2;
    while(low<=high) {
     if(arr[mid]<SE)
     low=mid + 1;
     else if(arr[mid] == SE) {
         printf("%d found at location %d", SE, mid+1);
         break;
        }
     else
        high=mid - 1;
        mid=(low+high)/2;
    }
  if(low > high)
  printf("Not found! %d isn't present in the Array", SE);
  return 0;
}