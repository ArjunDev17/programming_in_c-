#include<iostream>
const int max_len=25;
using namespace std ;
class person
{
private:
     char name[max_len];
     string sex;
     int age;
public:
    void reaData(){
        cout<<"Name : ";
        cin>>name;
        cout<<"Sex : ";
        cin>>sex;
        cout<<"Age : ";
        cin>>age;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Sex:"<<sex<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
class student : public person{
    private:
    int roll_no;
    char branch[20];
public:
    void reaData(){
        person::reaData();//Method Overriding
        cout<<"roll number ";
        cin>>roll_no;
        cout<<"Branch name ";
        cin>>branch;
    }
    void display(){
        person::display();
        cout<<"Roll_number :"<<roll_no<<endl;
        cout<<"Branch :"<<branch<<endl;
    }
};