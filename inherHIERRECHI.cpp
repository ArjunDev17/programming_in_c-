#include<iostream>
using namespace std;
class college{
    private:
        string collName;
        string addre;
    public:
        void getData(){
            cout<<"college Name:"<<endl;
            getline(cin,collName);
                        
        }
        void display(){
            cout<<"--------------------------------"<<endl;
            cout<<"College Name :"<<collName<<endl;
            
        }
};
int main(){
    college c1;
    c1.getData();
    c1.display();
    return 0;
}