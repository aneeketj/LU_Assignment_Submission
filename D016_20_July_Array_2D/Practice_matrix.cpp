#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i, j, a[3][3];

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << endl << "Enter the element in "<< i+1 <<"th row:\t";
            cin >> a[i][j];
        }
    }

        for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }
}