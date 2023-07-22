#include<stdio.h>
int main(){
    printf("enter your number : ");
    int num;
    scanf("%d",&num);
    if(num<=2 && num%2==0){
        printf("you number is diviseble form : 2");
    }
     if(num<=4 && num%4==0){
        printf("you number is diviseble form : 4");
    }
}