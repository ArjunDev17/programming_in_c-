#include<iostream>
using namespace std;
class test{
    private:
        int a;
        static int b;
    public:
        void input(int x){
                a=x;
               
        }
        void display(){
            cout<<"a="<<a<<endl;
            cout<<"b="<<b<<endl;
        }
        static void num(int c){
            b=c;
        }
};
int test::b;
int main(){
    
    test::num(81);
    test obj;
    obj.input(9);   
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