//pascal piramid program, finding maximum and minimum in a 2d array.

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n, i, j, p[20][20], sp=40;

    cout << endl << "Please Enter the number of rows:\t";
    cin >> n;

    for (i=0; i<7; i++)
    {
        for(j=0; j<sp; j++)
        cout << " ";
        {
            for (j=0; j<=i; j++)
            {
                if(j==0 || j==i)
                {
                    p[i][j] = 1;
                }
                else
                {
                    p[i][j] = p[i-1][j] + p[i-1][j-1];
                }
                cout << setw(4) << p[i][j];
            }
            sp = sp-2;
        }
        
        cout << endl;
    }
}