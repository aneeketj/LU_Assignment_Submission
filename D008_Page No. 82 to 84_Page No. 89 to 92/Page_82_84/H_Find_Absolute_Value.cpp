//(h) 	Find the absolute value of a number entered through the keyboard.

#include<iostream>
using namespace std;

int main(){
    int num;

    cout << endl << "Enter the numer:\t";
    cin >> num;

    if (num < 0)
        cout << endl << "The absolute value of a given number is : " << (-1) * num;
    else
        cout << endl << "The absolute value of a given number is :" << num;

    return 0;

}