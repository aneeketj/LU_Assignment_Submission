// (h) If a five-digit number is input through the keyboard, write a program to reverse the number.

#include<iostream>
using namespace std;

int main(){
    int a, reverse = 1;

    cout << endl << "Enter a 5 digit number:\t";
    cin >> a;

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





    return 0;


}
