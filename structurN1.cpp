#include<iostream>
using namespace std;

struct book{
    char name[10];
    int pag_no;
    void input(){
     cout<<"enter all information about book"<<endl;
     cin>>name>>pag_no;
    }void display(){
         cout<<name<<endl<<pag_no;
        }
};
void input();
void display(book);   
int main(){
    book b1;
    b1.input();
    b1.display();
    return 0;
}

