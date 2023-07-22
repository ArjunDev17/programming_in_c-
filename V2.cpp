#include<iostream>
#include<string.h>
using namespace std;
class Father{
    private:
        int age;
    public:
        Father(int X){
           age=X;
        }
         void display(){
            cout<<"Father s Age:"<<age<<endl;
        }
};
class son:public Father{
       private:
        int SON_age;
    public:
        son(int x,int X):Father(X){
           SON_age=x;
        }
        void display(){
            cout<<"Son Age is:"<<SON_age<<endl;
        }
};
int main(){
    Father *obj;
    son s1(30,68);
    obj=&s1;
    obj->display();
   ((son*)obj)->display();//type casting
    return 0;
}