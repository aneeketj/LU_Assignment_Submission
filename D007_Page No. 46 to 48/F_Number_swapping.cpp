// (f) Two numbers are input through the keyboard into two
// locations C and D. Write a program to interchange the
// contents of C and D.

#include<iostream>
using namespace std;

int main(){
    int C, D, S;

    cout << endl << "Please enter a number for loaction C:\t";
    cin >> C;

    cout << endl << "Please enter a number for Location D:\t";
    cin >> D;

    cout << endl << "Before Swapping C = " << C << " and D = " << D;

    S = C;
    C = D;
    D = S;

    cout << endl << "After Swapping C = " << C << " and D = " << D;

    return 0;
}