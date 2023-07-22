#include<iostream>
using namespace std;

class staticVarrable
{
private:
    int balance;//istance member variable
    //it is a declaration of class variable
    static float roi;//class variable
public:
    staticVarrable();
    void input(int in){
     balance=in;
    
    }
    static void fun(float r){
        roi=r;
        
    }
    void show(){
        cout<<balance<<roi<<endl;
        
    }
};
 float staticVarrable :: roi;//define class variable if\
 we want then here roi=value pass pr not it depends upon user
int main(){
    staticVarrable sv1,sv2;
    sv1.input(4);
    fun(9.3);
    sv1.show();
    return 0;
}