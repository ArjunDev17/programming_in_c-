#include<iostream>
using namespace std;
class  marks
{
protected:
    int m1,m2,m3;
     
public:
    void setMark(){
        cout<<"enter subject marks: "<<endl;
        cin>>m1>>m2>>m3;
    }
    void shwoMarks(){
        cout<<"first sub marks : "<<m1;
        cout<<"second sub marks: "<<m2;
        cout<<"third sub marks : "<<m3;
    }
};
class result :public marks
{
private:
    int total;
    float avg;
public:
    void setRes(){
        total=m1+m2+m3;
        avg=total/3.0;
    }
    void showRes(){
        cout<<"total marks="<<total<<endl;
        cout<<"avg="<<avg<<endl;
    }
};
class student :public 

