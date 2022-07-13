//  WAP for printing total and average of 10 different no’s.

#include <iostream>
using namespace std;

int main()
{
    int sum=0, num, i=1;

    while (i<=10)
    {
        cout << endl << "Please Enter number " << i << ":\t";
        cin >> num;
        sum = sum + num;
        i++;
    }

    cout << endl << "Total of enetered number is : \t" << sum;
    cout << endl << "Average of entered number is : \t" << (float)sum/10;

    return 0;
}