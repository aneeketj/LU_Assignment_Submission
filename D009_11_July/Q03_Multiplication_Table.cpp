// WAP for printing multiplication table of entered no by the user.

#include<iostream>
using namespace std;

int main()
{
    int num, i=1, out;

    cout << endl << "Enter a number for the multiplication table:\t";
    cin >> num;

    while (i<=10)
    {
        out = (num*i);
        cout << endl << num << " X " << i << " = " << out;
        i++;
    }
    return 0;
}