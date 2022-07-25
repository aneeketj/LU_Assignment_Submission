#include<iostream>
using namespace std;

int main()
{
    int a[5], i, b[5];

    cout << endl << "enter the element in array a";
    
    for(i=0; i<5; i++)
    {
        cout<< endl << "Enter the next element in array:\t";
        cin >> a[i];
    }

    for (i=4; i>=0; i--)
    {
        b[i] = a[i];
    }

    for(i=0; i<5; i++)
    {
        cout << endl << b[i];
    }

    return 0;

}