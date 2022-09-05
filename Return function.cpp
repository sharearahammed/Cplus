#include<iostream>
#include<conio.h>
using namespace std;
int addition(int,int);
int main()
{
    int a , b;
    cout<<"Enter two numbers = ";
    cin >> a >> b;
    int result = addition(a,b);
    cout << "The result is = " << result << endl;
    getch();
    return 0;
}
int addition(int a , int b)
{
    int sum = a + b;
    return sum;
}
