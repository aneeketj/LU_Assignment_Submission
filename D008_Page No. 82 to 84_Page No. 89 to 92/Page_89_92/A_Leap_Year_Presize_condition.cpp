//(a) 	Any year is entered through the keyboard, write a program to
//	determine whether the year is leap or not. Use the logical
//	operators && and ||.


// Any year that is evenly divisible by 4 is a leap year.
// However, there is still a small error that must be accounted for. 
// To eliminate this error, the Gregorian calendar stipulates that 
// a year that is evenly divisible by 100 (for example, 1900) 
// is a leap year only if it is also evenly divisible by 400.



#include<iostream>
using namespace std;

int main(){
    int yr;

    cout << endl << "Enter the year to check in YYYY format:\t";
    cin >> yr;

    cout << yr%4;

    if ((yr%4 == 0  && yr%100 != 0) || yr%400 ==0 )
        cout << endl << "The entered year is a leap year";
    else
        cout << endl << "The entered year is NOT a leap year";
    
    return 0;
    
}