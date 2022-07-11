// (g) If a five-digit number is input through the keyboard, write a
// program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’)


#include<iostream>
using namespace std;

int main(){
    int a, add = 0;

    cout << endl << "Enter a 5 digit number:\t";
    cin >> a;

    add = add + (a%10);
    a = a/10; 

    add = add + (a%10);
    a = a/10; 

    add = add + (a%10);
    a = a/10; 

    add = add + (a%10);
    a = a/10; 

    add = add + (a%10);
    a = a/10; 
    
    cout << endl << "The addition of all the digits in given number is:\t" << add;

    return 0;
}