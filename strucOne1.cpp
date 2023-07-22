#include<iostream>
using namespace std;
struct date{
    int day;
    int month;
    int year;   
};
int main(){
    date d1={13,5,1976};
    date d2={29,4,2021};
    cout<<"birth date : ";
    cout<<d1.day<<"-"<<d1.month<<"-"<<d1.year<<endl;
    cout<<"today date : ";
    cout<<d2.day<<"-"<<d2.month<<"-"<<d2.year<<endl;
    return 0;
}
