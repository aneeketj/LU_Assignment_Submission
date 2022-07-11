//(c) 	Any year is input through the keyboard. Write a program to
//	determine whether the year is a leap year or not.
//	(Hint: Use the % (modulus) operator)

#include<iostream>
using namespace std;

int main(){
    int yr;

    cout << endl << "Enter the year in YYYY format:\t";
    cin >> yr;

    yr = yr % 4;

    if (yr == 0)
    cout << endl << "The entered year is a LEAP year";
    else
    cout << endl << "NOT a Leap year";

    return 0;
    
}