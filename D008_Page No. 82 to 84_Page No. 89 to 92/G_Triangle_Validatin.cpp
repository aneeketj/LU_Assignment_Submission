// (g) 	Write a program to check whether a triangle is valid or not,
//	when the three angles of the triangle are entered through the
//	keyboard. A triangle is valid if the sum of all the three angles
//	is equal to 180 degrees.

#include <iostream>
using namespace std;

int main (){
    int a1, a2, a3, total;

    cout << endl << "Enter the first angle in degree:\t";
    cin >> a1;

    cout << endl << "Enter the second angle in degree:\t";
    cin >> a2;

    cout << endl << "Enter the third angle in degree:\t";
    cin >> a3;

    total = a1 + a2 + a3;

    if (a1+a2 ==180 || a1+a3 ==180 || a2+a3 == 180 || a1 == 180 || a2 == 180 || a3 == 180)
    cout << endl << "Triangle is NOT VALID";
    else if (total == 180)
    cout << endl << "The triangle is VALID";
    else 
    cout << endl << "Triangle is NOT VALID";

    return 0;
}