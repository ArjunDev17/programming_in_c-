#include<iostream>
void EvenOdd(int);
using namespace std;
int main(){
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
    EvenOdd(number);
    return 0;
}
void EvenOdd(int num){
    if(num%2==0)
    goto even;
    if(num%2!=0)
    goto odd;
    even :
    cout<<num<<"is even number"<<endl;
    return;
    odd:
    cout<<num<<"is odd number"<<endl;
    return;
}