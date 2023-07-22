#include<iostream>
using namespace std;
struct student{
    int roll_no;
    char name[20];
    char branch[15];
    float marks;
};
int main(void){
    student s1[10];//defination of structure
    int n,i;
    cout<<"list of studet : ";
    cin>>n;
    for ( i = 0; i < n; i++){
        cout<<i+1<<"student"<<endl;
        cout<<"Roll number: ";
        cin>>s1[i].roll_no;
        cout<<"name ? :";
        cin>>s1[i].name;
        cout<<"branch ? :";
        cin>>s1[i].branch;
        cout<<"marks< 110 > :";
        cin>>s1[i].marks;
   } 
    cout<<"student report card"<<endl;
    cout<<"--------------------"<<endl;
    for ( i = 0; i < n; i++){
    cout<<"Roll number : "<<s1[i].roll_no<<endl;
    cout<<"Name :   "<<s1[i].name<<endl;
    cout<<"Branch : "<<s1[i].branch<<endl;
    cout<<"Percentage : " <<s1[i].marks*(100.0/110)<<endl;
    }
}
