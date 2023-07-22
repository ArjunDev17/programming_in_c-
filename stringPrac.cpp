// C++ program to demonstrate getline() function

#include <iostream>
#include <string>
using namespace std;
/*
int main()
{
	string str;

	cout << "Please enter your name: \n";
	getline(cin, str);
	cout << "Hello, " << str
		<< " welcome to home !\n";

	return 0;
}*/

int main(){
    string str;
    getline(cin,str);
    cout<<"enter string"<<endl;
    //cin>>str;
    cout<<"string is-"<<str;
    return 0;     
}