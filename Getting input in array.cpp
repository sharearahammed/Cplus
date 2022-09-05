#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int marks[5];
    //input
    for(int i=0;i<=4;i++)
    {
       cout<<"Marks for student "<<i+1 <<" = ";
       cin>>marks[i] ;
    }
    //output
    cout<<"Marks are : ";
    ;
    for(int i=0;i<=4;i++)
    {
        cout<<marks[i]<<"  ";
    }



    getch();

}

