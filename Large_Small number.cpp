#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout << "Enter three numbers = "<<endl;
    cin >> num1 >> num2 >> num3;
    if(num1>num2 && num1>num3)
    {
        cout << "Number ONE Is Large = "<<num1;
    }
    else if(num2>num1 && num2>num3)
    {
        cout << "Number TWO IS Large = "<<num2;
    }
    else
    {
        cout << "Number THREE IS Large = "<<num3;
    }

    getch();
    return 0;
}
