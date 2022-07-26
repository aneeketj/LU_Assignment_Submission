#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int c[5], b[5], i, add=0, a=0, max, min, n, p =0, temp = 0;

    cout << endl << "enter the element in array a";
    
    for(i=0; i<5; i++)
    {
        cout<< endl << "Enter the next element in array:\t";
        cin >> c[i];
    }

    for (i=0; i<5; i++)
    {
        temp = c[i];
        add = 0;
        while (temp >= 1)
        {
            p++;
            temp = temp/10;
        }
        temp = c[i];

        for (n=0; n<=p; n++)
        {
            add = add + (temp%10);
            temp = temp/10; 
        }

        b[i]= add;
    }

    for (i=0; i<5; i++)
    {
        cout << setw(5) << b[i];           
    }

}
