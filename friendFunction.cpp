#include<iostream>
using namespace std;

class friendFunction
{
private:
   int a;
   float b;
   friend void test_work(friendFunction );//we can declare inside private
public: 
        void setData(int x,int y){
            a=x;
            b=y;
        }
        void showData(){
            cout<<"a="<<a<<endl<<"b="<<b<<endl;
        }
};
//void friendFunction :: test_work(friendFunction);\
it also wrong
void test_work(friendFunction getObj){//corect
 //cout<<"sum is "<<a+b is wrong
 cout<<"sum is "<<getObj.a+getObj.b<<endl;
}
int main(void){
    friendFunction ob1,ob2;
    ob1.setData(4,8);
     ob2.setData(45,9);
    //ob1.test_work(friendFunction);ERROR NOT CALL LIKE THAT
    test_work(ob1);
    ob1.showData();
    ob2.showData();
     test_work(ob2);
    return 0;
}


