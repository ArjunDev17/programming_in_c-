#include<iostream>
using namespace std;
void print(int);
void print(char);
int main(void){
    print(10);
     print('a');
     return 0;
}
void print(int x){
    cout<<x;
}
void print(char c){
    cout<<c;
}


    