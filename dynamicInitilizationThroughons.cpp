#include<iostream>
#include<string.h>
using namespace std;
class name
{
private:
    char first_name[15];
    char middle_name[15];
    char last_name[15];
public:
    name(){
        first_name[15]=middle_name[15]=last_name[15]='\0';
    }
    name(char *first);
     name(char *first,char *middle);
     name(char *first,char *middle,char *last);
     //~name();
     void show(char *msg);
};
inline name::name(char *first){
    strcpy(first_name,first);
    middle_name[0]=last_name[0]='\0';
}
void name::show(char *msg){
    cout<<msg<<endl;
    cout<<first_name;

}
int main(){
    name n1,n2;
    n2= name("bhiya");
    n2.show("first");
    return 0;

}
