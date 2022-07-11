//(b) 	Any integer is input through the keyboard. Write a program to
//	find out whether it is an odd number or even number.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << endl << "Enter the number";
    cin >> num;
    
    num = num % 2;

    if (num == 0)
    cout << endl << "The entered number is EVEN number";
    else 
    cout << endl << "The entered number is ODD number";

    return 0;
}