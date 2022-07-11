//(e)	A five-digit number is entered through the keyboard. Write a
//	program to obtain the reversed number and to determine
//	whether the original and reversed numbers are equal or not.

#include<iostream>
using namespace std;

int main(){
    int num, a, reverse = 1;

    cout << endl << "Enter a 5 digit number:\t";
    cin >> num;

    a = num;

    reverse = (a%10)*10000;
    a = a/10;

    reverse = reverse + (a%10)*1000;
    a = a/10;

    reverse = reverse + (a%10)*100;
    a = a/10;

    reverse = reverse + (a%10)*10;
    a = a/10;

    reverse = reverse + (a%10);
    a = a/10;


    cout << endl << reverse;

    if(num==reverse)
    cout << endl << "The originala and reversed numbers are equal";
    else
    cout << endl << "The original and reversed number are not equal";

    return 0;
}
