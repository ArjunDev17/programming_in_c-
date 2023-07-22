#include<iostream>
using namespace std;
int main(void){
    int *p,n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    p=new int[n];
    cout<<"enter array element:"<<endl;
    for (int i = 0; i < n; i++){
            cin>>p[i];      //cin>>(p+i)
        
    }
    cout<<"memory elemets are "<<endl;
    for (int i = 0; i < n; i++){
            cout<<" "<<*(p+i);
        
     }
     delete p;
        return 0;
}
