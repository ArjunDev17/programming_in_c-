#include<iostream>
using namespace std;

struct book{
    char name[10];
    int id_no;
    void input(){
     cout<<"enter all information about book"<<endl;
     cin>>name>>id_no;
     if(id_no<0){
         id_no=-(id_no);
     }
    }void display(){
         cout<<name<<endl<<id_no;
        }
};
void input();
void display(book);   
int main(){
    book b1;
   
    b1.input();
     b1.id_no=-23;
    b1.display();
    return 0;
}

