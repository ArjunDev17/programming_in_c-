
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Defining enum1 Gender
    enum class Gender { Male,
                  Female };
 
    // Defining enum2 Gender2 with same values
    // This will throw error
    enum class Gender2 { Male,
                   Female };
 
    // Creating Gender type variable
    Gender gender =Gender:: Male;
    cout<<"Male"<<endl;

    Gender2 gender2 = Gender2:: Female;
    cout<<"female";
   // cout <<gender << endl\
         << gender2;
 
    return 0;
}