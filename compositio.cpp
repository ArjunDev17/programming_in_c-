#include<iostream>
#include<string.h>
using namespace std;
class Option{
char smt[40];

};
class Question{
int qno;
Option *a,*b,*c,*d;
public:
 Question (){
     a=new Option();
     b=new Option();
     c=new Option();
     d=new Option();
    }
~Question(){
    delete a;
    delete b;
    delete c;
    delete d;
}
};
int main(){
    Question q1;
}