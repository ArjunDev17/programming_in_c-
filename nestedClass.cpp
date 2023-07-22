#include<iostream>

using namespace std;
class date{
    public:
        int day;
        int month;
        int year;

};
class student{
    public:
        char name[10];
        int roll_no;
        class date;
};