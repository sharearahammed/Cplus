#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
    int num;
    cout<<"Enter any integer:";
    cin>>num;
    for(int i=1; i<=10; i++)
    {
        cout<< num <<" X "<< i <<" = "<<(num*i)<<endl;

    }
    cout<<endl;
    cout<<"End ";



    getch();
}

