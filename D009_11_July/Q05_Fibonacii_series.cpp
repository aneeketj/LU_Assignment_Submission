//  WAP for printing fibonacii series:   1,1,2,3,5,8,13,21,….   Up till n digits in series.

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int num, i=1, fab, temp1=0, temp2=1;

    cout << endl << "Enter the length if series:\t";
    cin >> num;

    while (i<=num)
    {
        fab = temp1 + temp2;
        temp2 = temp1;
        temp1 = fab;  
        cout << fab << setw(5);
        i++;
    }
    return 0;    
}