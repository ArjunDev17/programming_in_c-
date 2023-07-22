#include<iostream>
using namespace std;
class Student {
    public:

        string name;
        string address;
        int rollNo;
        void print (const Student &);
        
        void display(){
            cout<<"Name-"<<name<<endl<<"Address-"<<address<<"Roll_no-"<<rollNo<<endl;
        }
};
int main(){
        Student s;
}
void print(const Student &s)
{
	cin >> s.name;
    cin >> s.address;
    cin >> s.rollNo;
}
