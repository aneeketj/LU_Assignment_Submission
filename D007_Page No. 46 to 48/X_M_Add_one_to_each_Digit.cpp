// (m) If a five-digit number is input through the keyboard, write a
// program to print a new number by adding one to each of its
// digits. For example if the number that is input is 12391 then
// the output should be displayed as 23402.

#include <iostream>
using namespace std;

int main(){
    int num, n5, n4, n3, n2, n1, new_num;
    cout << endl << "Enter a five digit number:\t";
    cin >> num;

    n5 = 1 + (num % 10);
    num = num / 10;
    n4 = 1 + (num % 10);
    num = num / 10;
    n3 = 1 + (num % 10);
    num = num / 10;
    n2 = 1 + (num % 10);
    num = num / 10;
    n1 = 1 + (num % 10);
    num = num / 10;

    new_num = n1*10000 + n2*1000 + n3*100 + n4*10 + n5;

    cout << new_num;
}