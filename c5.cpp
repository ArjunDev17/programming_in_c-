//Nesting function with in class
#include<iostream>
using namespace std;
class numPair{
    int num1,num2 ;//by default private
    public:
        void read(void){
            cout<<"enter first number ";
            cin>>num1;
            cout<<"entr second nmber ";
            cin>>num2;
        }
        //inside memmber function
        int max(void){
            if(num1>num2){
                cout<<"firsy number is greater ";
                return num1;
            }
            else{
                cout<<"second number is greater ";
                return num2;
            }
        }
        void show(void){
            int ma=max();//inside memmber function calling
            cout<<ma;
        }
};
int main(){
    numPair p;
    p.read();
    p.show();
    return 0;
}