#include<iostream>
using namespace std;

struct student{
    char name[10];
    int roll_no;
    char subject[10][20];
    };   
int main(){
    student stu[10];
    int n,s,i=0,m,j;
    cout<<"how many student in this list"<<endl;
    cin>>m;
    for ( i = 0; i < m; i++){
     cout<<"name of student"<<endl;
     cin>>stu[i].name;
     cout<<"roll number"<<endl;
     cin>>stu[i].roll_no;
     cout<<"total subject "<<endl;
     cin>>s;
     for ( j = 0; j < s; j++){
         cout<<j+1<<"subjet ";
         cin>>stu[i].subject[j];
        }
    }         
     cout<<"\nall information student"<<endl;
    cout<<"----------------------------"<<endl;
    for ( i = 0; i < m; i++){
        cout<<"Name: "<<stu[i].name<<endl<<"Roll_number :"<<stu[i].roll_no<<endl;
        for(j = 0; j < s; j++){
            cout<<j+1<<" subject  : "<<stu[i].subject[j]<<endl;
       } 
    } 
    return 0;
}

