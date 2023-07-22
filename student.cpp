#include<iostream>
using namespace std;

struct student{
    char name[10];
    int roll_no;
    char subject[10][15];
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
    }
     cout<<"student`s numbers of subject"<<endl;
        cin>>s;
        for ( j = 0; j < s; j++){
         cout<<j+1<<" subject-->  ";
         cin>>stu[i].subject[j];
         i++;
        }  
         
     cout<<"\nall information student"<<endl;
     for ( i = 0; i < m; i++){
       cout<<stu[i].name<<endl<<stu[i].roll_no<<endl<<stu[i].subject;
     }
    
    
    return 0;
}

