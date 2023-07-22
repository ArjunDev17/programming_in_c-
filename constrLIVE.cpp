//constructur :-->compiler make by default two construucture\
1:->by default consturuture\
2:->copy constructure\
when user create both then compilerr no make any constructure

#include<iostream>
using namespace std;
class constr3
{
private:
    int a;
    int b;
public:
    constr3(int x, int y) {//constructur
            a=x;
            b=y;
    }
    constr3(constr3 &x) {//2nd copy constructur
    a=x.a;
    b=x.b; 
    }
    void show(){
        int c;
        c=a+b;
        cout<<c<<endl;
    }
};
int main(void){
    constr3 c1(3,4),c3(8,9),c2(c3);
    c1.show();
    cout<<"copy constructur ";
    c2.show();
    return 0;
}