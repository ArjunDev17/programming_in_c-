#include<iostream>
using namespace std;
class Father{
    string *name;
    public:
        Father(string xyz){
            *name=xyz;     //no need strcpy
        }
        ~Father(){
            delete name;
        }
        void show(){
            cout<<"Father's name="<<*name;
        }
};
class son:public Father{
    string *s_name;
    public:
        son(string xyz,string *name ):Father(*name){
            *s_name=xyz;     //no need strcpy
        }
        ~son(){
            delete s_name;
        }
        void show(){
            cout<<"Father's name="<<*s_name<<endl;
        }

};
int main(){
    Father *f1;
    f1=new Father("dev");
    f1->show();
    return 0;
}