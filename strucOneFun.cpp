#include<iostream>
using namespace std;
struct student{
    int roll_no;
    char name[20];
    char branch[15];
    float marks;
};
void display(student dul){
    cout<<"Roll number : "<<dul.roll_no<<endl;
    cout<<"Name :   "<<dul.name<<endl;
    cout<<"Branch : "<<dul.branch<<endl;
    cout<<"Percentage : " <<dul.marks*(100.0/110)<<endl;
    
    }
student input()
{
    student s1;
        cout<<"Roll number: ";
        cin>>s1.roll_no;
        cout<<"name ? :";
        cin>>s1.name;
        cout<<"branch ? :";
        cin>>s1.branch;
        cout<<"marks< 110 > :";
        cin>>s1.marks;
        return s1;
   } 

int main(void){
    student stu1[10];//defination of structure
    int n,i;
    cout<<"list of studet : ";
    cin>>n;
    for ( i = 0; i < n; i++){
        stu1[i]=input();
    }   
    cout<<"student report card"<<endl;
    cout<<"--------------------"<<endl;
    for ( i = 0; i < n; i++){
        display(stu1[i]);
    }

}
