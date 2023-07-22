#include<iostream>
#include<string.h>
using namespace std;
class Father{
    private:
        char name[20];
    public:
        Father(char *fname){
           strcpy(name,fname);
        }
        virtual void display(){
            cout<<"Father s Name:"<<name<<endl;
        }
};
class son:public Father{
       private:
        char s_name[20];
    public:
        son(char *fname,char *s_nsm):Father(fname){
           strcpy(s_name,s_nsm);
        }
        void display(){
            cout<<"Father s Name:"<<s_name<<endl;
        }
};
int main(){
    Father *obj;
    Father f1("DeV");
    obj=&f1;
    obj->display();
    son s1("Dev","Arju");
    obj=&s1;
    obj->display();
    return 0;
}