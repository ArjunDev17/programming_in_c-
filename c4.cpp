//out side member function
#include<iostream>
using namespace std;

class rec{
    private:
        int day;
        int month;
        int year;
    public:
        void setDate(int day_in,int month_in,int year_in){
            day=day_in;
            month=month_in;
            year=year_in;
        }
        void show(void);//but declaration inside mendotary
};
//member function outside the class
inline void rec :: show(){
            cout<<day<<"-"<<month<<"-"<<year<<endl;
        }
int main(void){
    rec D1,D2,D3;
    D1.setDate(31,12,1990);
    D2.setDate(13,3,1995);
    D3.setDate(2,8,1997);
    cout<<"Birth day date of bhiyA-->";
    D1.show();
    cout<<"Birth day date of didi-->";
    D2.show();
    cout<<"Birth day date of A-->";
    D3.show();
    return 0;
}