#include<iostream>
using namespace std;
struct date{
    int day;
    int month;
    int year;   
};
struct student{
    int roll_no;
    char name[20];
    struct date birthday;  //date birthday;
    char branch[15];
    float marks;
};
int main(void){
    student s1;//defination of structure
    cout<<"Roll number: ";
    cin>>s1.roll_no;
    cout<<"name ? :";
    cin>>s1.name;
    cout<<"Date of Birthday: ";
    cin>>s1.birthday.day>>s1.birthday.month>>s1.birthday.year;
    cout<<"branch ? :";
    cin>>s1.branch;
    cout<<"marks< 110 > :";
    cin>>s1.marks;
    //display
    cout<<"student report card"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Roll number : "<<s1.roll_no<<endl;
    cout<<"Name :   "<<s1.name<<endl;
    cout<<"Birth Day : "<<s1.birthday.day<<"-"<<s1.birthday.month<<"-"<<s1.birthday.year<<endl;
    cout<<"Branch : "<<s1.branch<<endl;
    cout<<"Percentage : " <<s1.marks*(100.0/110)<<endl;
}
