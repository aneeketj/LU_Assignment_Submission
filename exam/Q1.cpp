#include<iostream>
#include<iomanip>
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
        b[i] = a[4-i];

    cout << "The reversed array of a is b=\t" ;
    
    for(i=0; i<5; i++)
    {
        cout << setw(4) << b[i];
    }

    return 0;

}
