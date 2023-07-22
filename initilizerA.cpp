#include<iostream>
using namespace std;
class Base{
    private:
        int a;
    public:
        Base(int x):a(x){
            cout<<"-----------------------"<<endl;
            cout<<"it is initilizer style "<<endl;
            cout<<"a= "<<a<<endl;
        }
    
};
class Drived : public Base{
    private:
        int b,c;
    public:
        Drived(int x,int y,int z):Base(z),b(x),c(x+y){
            cout<<"b= "<<b<<endl<<"c= "<<c<<endl;
        }
};
int main(){
    Drived obj(9,10,8);
    return 0;
}