#include<iostream>
using namespace std;
class account{
    public:
    int acNo;
    string name;
    static float rateOfIntrest;
    void input(int n,string nam){
        acNo=n;
        name=nam;
    } 
    void display(){
        cout<<name<<endl<<rateOfIntrest;
    }
};
float account ::rateOfIntrest;
int main(){
    account a1;
    account ::rateOfIntrest=9.4;//another type to
    a1.input(123,"ram");
    a1.display();
    return 0;

}