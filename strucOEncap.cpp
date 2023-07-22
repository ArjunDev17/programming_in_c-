#include<iostream>
using namespace std;
struct complex{
    int x;
    int y;
    void read(){
        cout<<"real part ";
        cin>>x;
        cout<<"imaginary part ";
        cin>>y;
    }
    void show();
};
