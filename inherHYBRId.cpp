#include<iostream>
using namespace std;
class student{
    private:
     string name;
     int marks;
    public:
        void getData(){
            cout<<"Enter name:";
            getline(cin,name);
            cout<<"enter Marks";
            cin>>marks;
        }
        void display(){
            cout<<"Student Name :"<<name;
            cout<<"Marks        :"<<marks;
        }
};
class internalMarks:virtual public student{
    private:
        int sub1;
        int sub2;
    public:
        void getData(){
            cout<<"First sub:";
            cin>>sub1;
            cout<<"second sub:";
            cin>>sub2;
        }
        void dispaly(){
            cout<<"First Subject :"<<sub1<<endl;
            cout<<"Second Subject:"<<sub2<<endl;
        }
         int totalInternal(){
            return (sub1+sub2);
        }
};
class ExternalMarks:virtual public student{
    private:
        int sub1;
        int sub2;
    public:
        void getData(){
            cout<<"First sub:";
            cin>>sub1;
            cout<<"second sub:";
            cin>>sub2;
        }
        void dispaly(){
            cout<<"First Subject :"<<sub1<<endl;
            cout<<"Second Subject:"<<sub2<<endl;
        }
        int totalExternal(){
            return (sub1+sub2);
        }
};
class Result:public internalMarks,public ExternalMarks{
    private:
        int total;
    public:
     int getData(){
            student::getData();
            internalMarks::getData();
            return (totalInternal()+totalExternal());
        }
};
int main(){
    int add; 
    Result obj;
    cout<<"student Data:"<<endl;
    obj.student::getData();
    cout<<"enter internal marks"<<endl;
    obj.internalMarks::getData();
    cout<<"external marks"<<endl;
    obj.ExternalMarks::getData();
    cout<<"Student details"<<endl;
      obj.student::display();
      obj.internalMarks::dispaly();
      obj.ExternalMarks::display();
      cout<<"Total marks"<<endl;
      obj.getData();
    return 0;
}
