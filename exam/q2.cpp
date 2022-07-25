#include<iostream>
using namespace std;

int main()
{
    int a[10], i, max, min;

    cout << endl << "enter the element in array a";
    
    for(i=0; i<10; i++)
    {
        cout<< endl << "Enter the next element in array:\t";
        cin >> a[i];
    }

    max = a[0];
    min = a[0];

    for(i=0; i<10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else if (a[i] < min)
        {
            min = a[i];
        }
    }

    cout << endl << "max=  " << max;
    cout << endl << "min=  " << min;
}
