//declaration and printing array.

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a[5], i;

    for (i=0; i<5; i++)
    {
        cout << endl << "Enter the array element " << i+1 << ":\t";
        cin>> a[i]; 
    }
    
    for (i=0; i<5; i++)
    {
        cout << setw(5) << a[i];
    }    
    return 0;
}