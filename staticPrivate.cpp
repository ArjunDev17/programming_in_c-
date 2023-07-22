#include<iostream>
using namespace std;
class account{
    private:
static float rateOfIntrest;
    public:
    int acNo;
    string name;
    void input(int n,string nam){
        acNo=n;
        name=nam;
    } //static is private so
     static void fun(float r){//static member fun
        rateOfIntrest=r;
    }
    void display(){
        cout<<name<<endl<<rateOfIntrest;
    }
};
float account ::rateOfIntrest;//=after that put stattic var value possible
int main(){
    account a1;
    //account ::rateOfIntrest=9.4;//another type to assign
     account ::fun(7.5f);
    a1.input(123,"ram");
    //a1.fun(7.5);//but here we need object
    a1.display();
    return 0;

}