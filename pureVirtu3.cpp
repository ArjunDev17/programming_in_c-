#include<iostream>
using namespace std;
class person{
    private:
        string name;
        int a;
    public:
        void input(){
           cout<<"Name :";
            cin>>name;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
        }
        virtual void getData()=0;
};
class student:public person{
    private:
        int roll_no;
        int marks;
    public:
        void getData(){
            person::input();
            cout<<"enter roll number :";
            cin>>roll_no;
            cout<<"enter marks :";
            cin>>marks;
        } 
        void display(){
            
           cout<<"Student details :";
           person::display();
            cout<<"Roll number :->"<<roll_no<<endl;
            cout<<"Mrks:->"<<marks<<endl ;  
        }
};
int main(){
    student obj;
    obj.getData();
    obj.display();
   // person obj;
   return 0;
}
