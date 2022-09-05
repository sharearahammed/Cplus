#include <iostream>
#include<conio.h>

using namespace std;

int
main ()
{
    int n, sum = 0;
    cout << "Enter your number of students: ";
    cin >> n;
    int students[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Student marks "<<i+1<< " = " ;
        cin >> students[i];
        sum = sum + students[i];


    }
    cout<<endl;
    cout << "All students marks is : " << sum<<endl;
    cout << "Avarage all students marks is : " << (float) sum / n << endl;
    int max = students[0];
    int min=students[0];

    for (int i = 0; i < n; i++)
    {
        if (max < students[i])
        {
            max = students[i];
        }
        if (min > students[i])
        {
            min = students[i];
        }

    }
    cout<<endl;


    cout << "The maximum marks is : " << max << endl;
    cout<<"The minimum marks is : "<<min<<endl;






    getch ();
}
