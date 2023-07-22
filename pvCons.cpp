#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Admin{
    private:
        char name[20];
        char pwd[10];
            Admin(){//private constructure
            strcpy(name,"bhiya");
            strcpy(pwd,"123ASD");
        }
        static int objCounter;
    public:
        void show(){
            cout<<"UserName :"<<name<<endl;
            cout<<"Password :"<<pwd;
        }//static memeber function//
        static Admin* getobj1(){
            if(objCounter==0){
             Admin *ptr=new Admin;
             return (ptr);
            }
            else{
                return(NULL);
            }
        }
};
int Admin :: objCounter=0;
int main(){
    Admin *pointer;
    pointer=Admin ::getobj1();
    if(pointer!=0){
     pointer->show();
    }
    Admin *p;
    p=Admin ::getobj1();
    if(p==NULL){
     pointer->show();
    }
    else{
        cout<<"no more object ";
    }
    return 0;
}