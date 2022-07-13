//WAP for checking 10 different for positive negative and zero

#include <iostream>
using namespace std;

int main()
{
    int i=1, n=0, p=0, z=0, num;

    while(i<=10)
    {
        cout << endl << "Enter a number: " << i << ":\t";
        cin >> num;

        if (num>0)
        {
            p++;
        }
        else if(num<0)
        {
            n++;
        }
        else if (num==0)
        {
            z++;
        }
        else
        {
            cout << endl << "Not a valid Iteger";
        }

        i++;
    }

    cout << endl << "Total negative numbers:\t"<< n;
    cout << endl << "Total positive numers:\t"<< p;
    cout << endl << "Total zeros entered:\t" << z;
}