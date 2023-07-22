//when variable in private mode
#include<iostream>
using namespace std;

class digit{
    private:
    int a,b;
    public:
        void input(){
            cout<<"enter value of a and b : ";
            cin>>a>>b;
            cout<<a<<b;
        }

};
class Add : public digit{
    public:
        int add(){
           // int c=a+b;
           input();
           
        }
};
int main(){
    Add obj;
    obj.input();
    obj.add();
    return 0;
}