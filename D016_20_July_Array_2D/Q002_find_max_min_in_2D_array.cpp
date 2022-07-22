#include<iostream>
using namespace std;

int main()
{
    int i, j, a[3][3], max, min;

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            cout << endl << "Enter the Number:\t";
            cin >> a[i][j];
        }
    }

    max = a[0][0];
    min = a[0][0];

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if(a[i][j] > max)
                max = a[i][j];
            else if (a[i][j] < min)
                min = a[i][j];
        }
    }
    cout << endl << "The largest element in matrix is :\t" << max;
    cout << endl << "The smallest element in matrix is :\t" << min;
}