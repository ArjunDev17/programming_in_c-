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
            
        }
        void display(){
            cout<<"Student Name :"<<name;
        }
};
class Marks{
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
};
class result{
    private:
        char grade[3];
    public:
        Marks m1;
        student s1;
        void getData(){
            s1.getData();
            m1.getData();
            cout<<"grade ";
            cin>>grade;
        }
    void display(){
        s1.display();
        m1.dispaly();
        cout<<grade<<endl;
    }
};
int main(){
    result obj;
    obj.getData();
    obj.display();
    return 0;
}