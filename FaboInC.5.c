#include<stdio.h>
#include<conio.h>
int  main(){
    int size;
    int i;
    printf("Enter number upto you want Fabonacci series \n");
    scanf("%d",&size);
    int a=0;
    int b=1;
    printf("Your fabonacci Series is....\n");
    printf("%d %d",a,b);
    for ( i = 0; i < size; i++)
        {
        int c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    return 0;
}