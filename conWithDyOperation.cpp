#include<iostream>
using namespace std;
class vector
{
private:
    int *v;
    int size;
public:
    vector(int);
    ~vector();
    void read();
    void show_sum();
};

vector::vector(int sz)
{
    size=sz;
    v=new int[size];
}
void vector::read(){
    for (int i = 0; i >size; i++)
    {
    cout<<"enter vector["<< "] ";
    cin>>v[i];
    }
}
int main(){
    vector v1(7);
}

vector::~vector()
{
    delete v;
}
