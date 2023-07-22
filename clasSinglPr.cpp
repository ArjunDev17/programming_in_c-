//when variable in private mode
#include<iostream>
using namespace std;

class digit{
    protected:
    int a,b;//when it private then we cant access out side of classes
    public:
        void input(){
            cout<<"enter value of a and b : ";
            cin>>a>>b;
           }

};
class Add : public digit{
    public:
        void add(){
         int c=a+b;
         cout<<"sum is "<<c;
                  
        }
};
int main(){
    Add obj;
    obj.input();
    obj.add();
    return 0;
}