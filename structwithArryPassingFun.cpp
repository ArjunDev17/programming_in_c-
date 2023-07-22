#include<iostream>
using namespace std;

struct student{
    char name[10];
    int roll_no;
    char subject[10][20];
    }; 
    student input();
    void display(student);
    //fun defination
    student input(){
     student stu;
     int j,s;
     cout<<"name of student"<<endl;
     cin>>stu.name;
     cout<<"roll number"<<endl;
     cin>>stu.roll_no;
     cout<<"total subject "<<endl;
     cin>>s;
     for ( j = 0; j < s; j++){
         cout<<j+1<<"subjet ";
         cin>>stu.subject[j];
        }
        return stu;
    }   
    void display(student read) {
        cout<<"Name: "<<read.name<<endl<<"Roll_number :"<<read.roll_no<<endl;
        for(j = 0; j < s; j++){
            cout<<j+1<<" subject  : "<<read.subject[j]<<endl;
       } 
    }     
     int n,s,i=0,m,j;
int main(){
    student stuA[10];
   
    cout<<"how many student in this list"<<endl;
    cin>>m;
    for ( i = 0; i < m; i++){
        stuA[i]=input();
    }
     
     cout<<"\nall information student"<<endl;
    cout<<"----------------------------"<<endl;
    for ( i = 0; i < m; i++){
         display(stuA[i]);
        
    } 
    return 0;
}

