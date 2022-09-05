#include <iostream>
#include<conio.h>

using namespace std;

int main ()
{
  int n, sum = 0;
  cout << "Enter your number of students: ";
  cin >> n;
  int students[n];

  for (int i = 0; i < n; i++)
    {
      cout << i + 1 << ".students marks :";
      cin >> students[i];
      sum = sum + students[i];

    }
  cout << "all students marks is : " << sum << endl;
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


  cout << "the maximum marks is : " << max << endl;
   cout<<"the manimum marks is : "<<min<<endl;






  getch ();
}
