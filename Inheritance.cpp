#include <iostream>
#include<conio.h>
using namespace std;


class Person
{
public:
    string name;
    int age;

    void display1()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

class Student : public Person
{
public:
    int id;
    string city;

    void display2()
    {
        cout<<"ID : "<<id<<endl;
        cout<<"City : "<<city<<endl;
        display1();
    }
};

int main()
{

    Student s1;
    s1.id = 101;
    s1.name ="Sharear Ahammed";
    s1.age =30;
    s1.city = "Dhaka";
    s1.display2();


    getch();
}
