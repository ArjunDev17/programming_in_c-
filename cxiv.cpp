#include<iostream>
using namespace std;
class AccClass{
    private:
            int acc_no;
            float balace;
    public:
            void credit(){
                cout<<"enter your account number: ";
                cin>>acc_no;
                cout<<"enter balance : ";
                cin>>balace;
            }
            void debit(int acIn,float baIn){
                acc_no=acIn;
                balace=baIn;
            }
            void display(){
                cout<<"account number is: "<<acc_no<<endl;
                cout<<"your bank balance is : "<<balace<<endl;
            }
            void money_transefer(AccClass &ac1,float balace);//delaration
 };
 void AccClass :: money_transefer(AccClass &ac1,float amount){
     balace=balace-amount;
    ac1.balace=ac1.balace+amount;
   
 }
 int main(){
     AccClass ac1,ac2,ac3;
     ac1.credit();
     ac2.debit(934065,500);
     cout<<"first Account:"<<endl;
     ac1.display();
     cout<<"second Account:"<<endl;
     ac2.display();
     cout<<"enter the amount"<<endl;
     int amount;
     cin>>amount;
     ac3.money_transefer(ac1,amount);
      ac1.display();
      ac2.display();
      ac3.display();
 }