#include<iostream>
#include<string.h>


using namespace std;
class student{
    private:
        string name;
        int roll_no;
    public:
        void setStu(){
            cout<<"enter student name and roll number "<<endl;
            cin>>name>>roll_no;
        }
        void pshow(){
            cout<<"Name ->"<<name<<endl;
            cout<<"Roll_no->"<<roll_no<<endl;
        }
 
 };
 class marks: public student{
    protected:
         int m1,m2,m3;
         public:
        void setMar(){
            cout<<"enter the marks "<<endl;
            cin>>m1>>m2>>m3;
        }
 };
 class result:public marks{
     private:
        int total;
        float avg;
    public:
            void setRes(){
               
                total=m1+m2+m3;
                avg=total/3.0;
            }
            void show(){
                cout<<"total marks= "<<total<<endl;
                cout<<"average->"<<avg<<endl;
            }
 };
 int main(){
     result obj;
     obj.setStu();
     obj.setMar();
     obj.setRes();
     obj.pshow();
     obj.show();
     return 0;
 }