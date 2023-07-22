#include<iostream>
#include<string.h>
using namespace std;

class student{
    private:
     int roll_no;
     char name[20];
     public:
    void setData(int r,char *n){
        roll_no=r;
        strcpy(name,n);      
    }
    void display(){
        cout<<roll_no<<endl;
        cout<<name;
    }
};
int main(void){
    student s1;
    cout<<"enter roll number and "<<endl;
    int n;
    cin>>n;
    char name[10];
   cin>>name;
    
    s1.setData(n,name);
    s1.display();
}