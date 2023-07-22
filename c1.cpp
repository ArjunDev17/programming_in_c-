#include<iostream>
using namespace std;

class sum{
    private:
        int a,b,sum;
        public:
        void input(int x,int y){
           
            a=x;
            b=y;
            if(a<0)
             cout<<"plzz enter positive number"<<endl;
                   
        }
        void show(){
            sum=a+b;
            cout<<"addition is"<<sum<<endl;
           
        }
};
int main(void){
    sum s1;
     cout<<"enterr two number ";
             int x,y;
            cin>>x>>y;
    s1.input(x,y);
    s1.show();
    return 0;
}


