// (i) If a four-digit number is input through the keyboard, write a
// program to obtain the sum of the first and last digit of this number.


#include <iostream> 
using namespace std;

int main(){
    int n, l, sum;

    cout << endl << "Enter the four digit number:\t";
    cin >> n;

    l = n%10;

    n = n / 10;
    n = n / 10;
    n = n / 10;

    sum = n + l;
    
    cout << endl << "The sum of first digit and last digit is " << sum;

    return 0;
}