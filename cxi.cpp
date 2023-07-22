#include<iostream>
using namespace std;
 
class test
{
private:
    int a,b;
public:
    void input(int a,int b){
        a=a;
        b=b;
    }

    void show(){
        cout<<"object address ="<<this<<endl;
         cout<<"a ="<<a<<endl;
           cout<<"b ="<<b;
    }
};
int main(){
    test t1;
    t1.input(10,4);
    t1.show();
    return 0;

}