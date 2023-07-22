#include<iostream>
#include<string.h>
using namespace std;
class Admin{
    private:
     char name[20];
     char pwd[10];
   
        Admin(){//private constructure
            strcpy(name,"bhiya");
            strcpy(pwd,"123ASD");
        }
    public:
        void show(){
            cout<<"UserName :"<<name<<endl;
            cout<<"Password :"<<pwd;
        }
        static Admin* getobj1(){
            Admin *ptr=new Admin;
            return (ptr);
        }
};
int main(){
    Admin *pointer;
    pointer=Admin ::getobj1();
    pointer->show();
    return 0;
}