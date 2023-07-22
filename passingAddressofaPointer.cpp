#include<iostream>
using namespace std;
void big(int *x,int *y,int **lage){
    if(*x>*y)
    *lage=x;
    else
    *lage=y;
   


}
int main(){
    int a=5,b=7,*bp;
   big(&a,&b,&bp);
   cout<<*bp;
    return 0;
}