#include<iostream>
using namespace std;

class teacher{
    private:
        float income;
        char name[20];
        char branch[25];
    public:
        void getData(){
            cout<<"------------------------------"<<endl;
            cout<<"Teacher information..."<<endl;
            cout<<"Name : ";
            cin>>name;
            cout<<"Sailary :";
            cin>>income;
            cout<<"Brach name : ";
            cin>>branch;
        }
    void display(){
        cout<<"------------------------------------"<<endl;
        cout<<"Tacher name :"<<name<<endl;
        cout<<"Sailary     :"<<income<<endl;
        cout<<"Branch Name :"<<branch<<endl;        
    }
};
class student{
    private:
        char StuName[20];
        char branch[25];
        char MomName[20];   
    protected:
        char NikName[10];
    public: 
        void getData(){
            cout<<"------------------------------"<<endl;
            cout<<"Student sort information..."<<endl;
            cout<<"Nikname: ";
            cin>>NikName;
            cout<<"Mother name: ";
            cin>>MomName;
            cout<<"student real name:";
            cin>>StuName;
            cout<<"in which Branch's user select";
            cin>>branch;
        }
    void display(){
        cout<<"--------------------------------"<<endl;
        cout<<"Nikname of student   :"<<NikName<<endl;
        cout<<"Student's Mother name:"<<MomName<<endl;
        cout<<"Student Name         :"<<StuName<<endl;
        cout<<"Branch name          :"<<branch<<endl;
    }
};
class college:public teacher,public student{
    private:
        char collName[40];
    public:
        void getData(){
            cout<<"college Name:"<<endl;
            cin>>collName;
            teacher::getData();
            student::getData();
        }
        void display(){
            cout<<"--------------------------------"<<endl;
            cout<<"College Name :"<<collName<<endl;
            teacher::display();
            student::display();
        }
};
int main(){
    college t1;
    t1.getData();
    cout<<"****Information*****"<<endl;
    t1.display();
    return 0;
}
