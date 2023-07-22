#include<iostream>
using namespace std;
struct date{
    unsigned int day :5;
    unsigned int month :4;
    unsigned int year;    
};
int main(void){
    date d1={23,6,2021};
    cout<<"size of this data structure is"<<sizeof(date)<<endl;
     cout<<"size of this data structure is"<<sizeof(d1);
     return 0;
}
