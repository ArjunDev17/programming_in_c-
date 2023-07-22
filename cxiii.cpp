#include<iostream>
using namespace std;

class AccClass{
    private:
       int accno;
       float balance;
    public:
    //account 1
        void getdata(){
            cout<<"enter account number or acc1 object : ";
            cin>>accno;
            cout<<"enter balance: ";
            cin>>balance;
        }
        //acount 2
        void setdata(int accIn){
            accno=accIn;
            balance=0;
        }//account 3
            void setdata(int accIn,float balanceIn){
            accno=accIn;
            balance=balanceIn;
        }//shows account
        void display(){
            cout<<"account number is :"<<accno<<endl;
            cout<<"Balance is : "<<balance<<endl;
        }//money transefer logic fun declation
        void MoneyTransefer(AccClass & acc,float amount);
 };
 void AccClass::MoneyTransefer(AccClass & acc,float amount){
     balance=balance-amount;
     acc.balance=acc.balance+amount;
 }
 int main(){
     int transeMoney;
     AccClass acc1,acc2,acc3;
     acc1.getdata();
     acc2.setdata(10);
     acc3.setdata(20,750.4);
     cout<<"account information : "<<endl;
     acc1.display();
     acc2.display();
     acc3.display();
     cout<<"how much money is to be transefered from aac3 to acc2: ";
     cin>>transeMoney;
     acc3.MoneyTransefer(acc2,transeMoney);
     cout<<"the updated information is: "<<endl;
     acc1.display();
     acc2.display();
     acc3.display();
}



 

