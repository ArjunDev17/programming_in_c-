//person\
sudent\
exam\
ModelsExaminationDatabaseUsingMultilevlInheritence.cpp
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
        person::display();//new thng
        cout<<"Roll_number :"<<roll_no<<endl;
        cout<<"Branch :"<<branch<<endl;
    }
};
class exam : public student{
    protected:
    int sub1Marks;
    int sub2Marks;
public:
    void reaData(){
        student::reaData();
        cout<<"enter marks score in first subject :";
        cin>>sub1Marks;
        cout<<"enter marks score in second subject :";
        cin>>sub2Marks;
    }
    void display(){
        student::display();
        cout<<"Sub1Marks :"<<sub1Marks<<endl;
        cout<<"Sub2MArks :"<<sub2Marks<<endl;
        cout<<"Total Marks :"<<TotalMarks();
    }
    int TotalMarks(){
        return sub1Marks+sub2Marks;
    }
};
int main(void){
    exam annual;
    cout<<"Enter data of student ....:"<<endl;
    annual.reaData();
    cout<<"Student Details .....:"<<endl;
    annual.display();
}