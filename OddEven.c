//Write a C program to check whether the given number is Odd or Even
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number to check given number is odd or even\n");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d : is even number.",num);
    }
    else{
        printf("%d : is odd number.",num);
    }
}