#include<iostream>
using namespace std;
class person{
    private:
        string name;
    public:
       
        void getInput(){
            cout<<"Name :";
            cin>>name;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
        }
         virtual void getData() = 0;
};
class student:public person{
    private:
        int roll_no;
        int marks;
    public:
        void getData(){
            person::getInput();
            cout<<"enter roll number :";
            cin>>roll_no;
            cout<<"enter marks :";
            cin>>marks;
        } 
        void display(){
            person::display();
            cout<<"Student details :";
            cout<<"Roll number :->"<<roll_no<<endl;
            cout<<"Mrks:->"<<marks<<endl ;
        }
};
int main(){
    student obj;
    //person obj;
    obj.getData();
    obj.display();
    return 0;
}