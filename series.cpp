//1+2+3+.....+ n
#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
    int sum=0,n;
    cout <<"Enter the last number : ";
    cin >> n;
    for(int i = 1; i <= n; i = i+1)
    {
        sum= sum + i;
    }
    cout << sum;
    getch();
}

//2+4+6+8.....+ n(sum of even numbers from 1 to n)
#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
    int sum=0,n;
    cout <<"Enter the last number : ";
    cin >> n;
    for(int i = 2; i <= n; i = i+2)
    {
        sum= sum + i;
    }
    cout << sum;
    getch();
}
//1+3+5+...+ n(sum of odd numbers from 1 to n)
#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
    int sum=0,n;
    cout <<"Enter the last number : ";
    cin >> n;
    for(int i = 1; i <= n; i = i+2)
    {
        sum= sum + i;
    }
    cout << sum;
    getch();
}

//1^2+2^2+3^2+...+ n^2
#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
    int sum=0,n;
    cout <<"Enter the last number : ";
    cin >> n;
    for(int i = 1; i <= n; i = i+1)
    {
        sum= sum + i*i;
    }
    cout << sum;
    getch();
}

//1^5+2^5+3^5+...+ n^5(sum of odd numbers from 1 to n)
#include<iostream>
#include<cmath>
using namespace std;
int main()

{
    int sum=0,n;
    cout <<"Enter the last number : ";
    cin >> n;
    for(int i = 1; i <= n; i = i+1)
    {
        sum= sum + pow(i,5);
    }
    cout << sum;
    getch();
}
