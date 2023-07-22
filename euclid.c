#include<stdio.h>   
int eue(int,int);
int main(){
    int a=10,b=15;
    int e;
    printf("sddf");
    e=eue(a,b); 
   
    printf("%d",e);  
}
int eue(int x,int y){
    if(x==0){
    return x;
    }
    else{
        eue(y,x%y);
    }
}