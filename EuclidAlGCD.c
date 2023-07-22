#include<stdio.h>
int gcd(int,int);//Method Dclaration
int main(){
  int num1,num2;
  printf("Enter value for num1 and num2:\n");
  scanf("%d%d",&num1,&num2);
  int eucli ;
  eucli=gcd(num1,num2);//method Calling
  printf("%d and %d of \n",num1,num2);
  printf("Greatest Common Devision is--> %d",eucli);
}
  int gcd(int a,int b){
    if(b == 0){
        return a;
    }
    else{
        gcd(b, a%b);//Recursive Calling
    }
  }