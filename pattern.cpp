#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,row,col;

    cout<<"Enter your pattern number :";
    cin>>n;

    for(row=1; row<=n; row++)
    {
        for(col=0 ; col<=row; col++)
        {
            cout<<" "<<col;
        }
        cout<<endl;
    }

    getch();

}
