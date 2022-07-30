#include <iostream>
#include <iomanip>
using namespace std;

int *p, n;
void sel(int[], int);

int main()
{
    int  i, j;

    cout << endl << "Enter the length:\t";
    cin >> n;

    p = new int(n);

    for (i=0; i<n; i++)
    {
        cout << endl << "Enter the element number " << i+1 << ":\t";
        cin >> p[i];
    }

    sel (p, n);
    
    cout << endl << "after sorting";

    for (i=0; i<n; i++)
    {
        cout << setw(5) << p[i];
    }
    return 0;
}

void sel (int [], int s)
{
    int i, j, t;

    for (i=0; i<n; i++)
    {
        for (j=i+1; j < s; j++)
        {
            if (p[i]>p[j])
            {
                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
        }    
    }
}