#include<iostream>
using namespace std;
class test{
    private:
        int a;
        static int b;
    public:
        void input(int x,int y){
                a=x;
                b=y;
        }
        void display(){
            cout<<"a="<<a<<endl;
            cout<<"b="<<b<<endl;
        }
};
int test::b;
int main(){
    test obj;
    obj.input(9,7);   
    obj.display();
    return 0;
}
/*static int n;
    cout<<"enter size :";
    cin>>n;
    for (int i = 0; i < 5; i++)
    {
        cout<<i<<endl;
        cout<<n<<endl;
        n++;
       
    }
    cout<<n;*/