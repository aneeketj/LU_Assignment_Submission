// WAP for calculating factorial of a entered no.

#include <iostream>
using namespace std;

int main ()
{
    int num, i=1, fact=1;

    cout << endl << "Number for factorial:\t";
    cin >> num;
    
    while(i<=num)
    {
        fact = fact * i;
        i++;
    }
    cout << "Factorial of the: " << num << " is: " << fact;

    return 0;
}