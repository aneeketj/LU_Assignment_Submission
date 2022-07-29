#include <iostream>
using namespace std;

void sel(int[], int);

int main()
{
    int p[5], i, j;
    for (i=0; i<5; i++)
    {
        cout << endl << "Enter the element number" << i+1 << ":\t";
        cin >> p[i];
    }

    sel (p, 5);
    cout << endl << "after sorting";

    for (i=0; i<5; i++)
    {
        cout << endl << p[i];
    }
    return 0;
}

void sel (int p[5], int s)
{
    int i, j, t;

    for (i=0; i<5; i++)
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