/*
0   1   0   1   0
0   1   0   1   0
0   1   0   1   0
0   1   0   1   0
0   1   0   1   0
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int r, c, n;

    cout << endl << "Enter the number of iterations\t";
    cin >> n;

    for (r=1; r<=n; r++)
    {
        for (c=1; c<=n; c++)
        {
            cout << setw(4) << ((c+1)%2);
        }
        cout << endl;
    }
}