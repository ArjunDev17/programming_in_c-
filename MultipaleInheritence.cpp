//publication, sales->book,\
publication, sales->tape,
#include<iostream>
using namespace std;
class publication{
    private:
        char Title[20];
        float price;
    public:
        void getData(){
            cout<<"enter book title -> ";
            cin>>Title;
            cout<<"\nprice of book ";
            cin>>price;
        }
        void display(){
            cout<<"Book Title -> "<<endl<<"Price of Book ";
        }
};
class sails{
    private:
    float publiShail[3];
    public:
        void getData();
        void display();
};
    void sails::getData(){
            int i;
            for(i=0;i<3;i++){
             cout<<"enter sails of  "<<i+1<<"month";
             cin>>publiShail[i];
            }
        }
    void sails::display(){
        int i;
            for(i=0;i<3;i++){
             cout<<"enter sails of  "<<i+1<<"month";
             cout<<publiShail[i];
            }
    }
class Book:public publication,public sails{
    private:
        int page_no;
    public:
        void getData(){
            publication::getData();
            cout<<"enter thne page numbers: ";
            cin>>page_no;
        }
        void display(){
            publication::display();
            cout<<"Numbers of pages ";
            cout<<page_no;
            sails::display();
        }
};
class tape:public publication,public sails{
    private:
        float PlayingTim;
    public:
        void getData(){
            publication::getData();
            cout<<"enter playing time in minutes :";
            cin>>PlayingTim;
            sails::getData();
        }
    void display(){
        publication::display();
        cout<<"playing time in minute="<<PlayingTim<<endl;
        sails::display();
    }
};
class pamphlet:public publication{

};
class notice:public pamphlet{
    private:
        char whom[20];
    public:
        void getData(){
            pamphlet::getData();
            cout<<"\tEnter type of distributor:- ";
            cin>>whom;
        }
        void display(){
            pamphlet::display();
            cout<<"\tType of distributor:-"<<whom<<endl;
        }
};
int main(){
    Book b1;
    tape t1;
    pamphlet p1;
    notice n1;
    cout<<"Enter book publication data:"<<endl;
    b1.getData();
    cout<<"Enter Tape publicatin Data:"<<endl;
    t1.getData();
    cout<<"Enter pamhlet publicatin Data:"<<endl;
    p1.getData();
    cout<<"Enter notice publicatin Data:"<<endl;
    n1.getData();
    cout<<"Book publication Data...."<<endl;
    b1.display();
    cout<<"pamhlet publication Data...."<<endl;
    p1.display();
    cout<<"Notice publication Data...."<<endl;
    n1.display();        
}


