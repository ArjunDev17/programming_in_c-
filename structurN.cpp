#include<iostream>
using namespace std;
int main(void){
    int a=5,b=6;
    cout.width(2);
    cout<<"--------"<<a<<"---------"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<std::right<<100<<endl;
    cout.width(8);
    cout<<b;
    return 0;
}