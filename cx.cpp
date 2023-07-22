//ACCes private memeber function
#include<iostream>
using namespace std;

class pri{
    private:
    int n;
        int input(){
            cout<<"enter the digit :";
            cin>>n;
            return n;
        }
        public:
            void call_private(){
                n=input();
                cout<<n<<endl;
            }
};
int main(void){
    pri p1,p2;
   // p1.input() error
   p1.call_private();
   p2.call_private();
}
