//Write a C program to check whether given number is Prime 
//or not using for…loop and if... statement.
#include<stdio.h>
int main(){
    int num;
    printf("Please Enter the number ");
    scanf("%d",&num);   
    if (num!=2 &&  num % 2 !=0)
    {
        printf("%d : is prime number",num);
    }
    else
    {
        printf("%d : is not prime number",num);
    }
    return 0;
    
}