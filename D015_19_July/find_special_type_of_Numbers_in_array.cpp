//counting even odd positive negative and zero in array of 10 elements

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i, a[10], even = 0, odd = 0, positive = 0, negative = 0, zero = 0;

    for (i=0; i < 10; i++)
    {
        cout << endl << "Enter the element No. " << i+1 << ":\t";
        cin >> a[i];
    }

    for (i=0; i < 10; i++)
    {
        if(a[i]%2 ==0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if(a[i] > 0)
        {
            positive++;
        }
        else if (a[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    
    cout << endl << "Total Even numbers present in array:\t" << even;
    cout << endl << "Total Odd numbers present in array:\t" << odd;     
    cout << endl << "Total Positive numbers present in array:\t" << positive;
    cout << endl << "Total Negative numbers present in array:\t" << negative;
    cout << endl << "Total Zeros present in array:\t" << zero;
}
