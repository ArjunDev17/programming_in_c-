//unconditionally branching statement
#include<iostream>
using namespace std;
void priNumber(void);
int main(){
    priNumber();
}
void priNumber(){
    int n=1;
    next :
    cout<<n<<endl; 
     n++;
    if (n<=10)
    goto next;
}
