#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class Student
{
    public :
    int id;
    double gpa;
};


int main()
{
    Student Nihal,Nabil,Fahim;

    Nihal.id=101;
    Nihal.gpa=5;
    cout<<"Nihal_id = "<<Nihal.id<<endl<<"GPA = "<<Nihal.gpa<<endl<<endl;

    Nabil.id=102;
    Nabil.gpa=4;
    cout<<"Nabil_id = "<<Nabil.id<<endl<<"GPA = "<<Nabil.gpa<<endl<<endl;

    Fahim.id=103;
    Fahim.gpa=3;
    cout<<"Fahim_id = "<<Fahim.id<<endl<<"GPA = "<<Fahim.gpa<<endl;






    getch();

}
