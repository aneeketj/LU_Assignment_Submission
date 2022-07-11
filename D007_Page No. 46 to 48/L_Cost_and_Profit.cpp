// (l) If the total selling price of 15 items and the total profit earned
// on them is input through the keyboard, write a program to
// find the cost price of one item.

#include <iostream> 
using namespace std;

int main(){
    float ts, tp, c, s, p;
    int n=15;

    cout << endl << "Please enter total Selling prize of 15 items:\t";
    cin >> ts;
    s = ts/n;
    cout << endl << "Selling Prize per item is:\t" << s;

    cout << endl << "Please enter the total profit earned:\t";
    cin >> tp;
    p = tp/n;
    cout << endl << "Profit per item is:\t" << p;

    c = s - p;
    cout << endl << "The total cost for one item is:\t" << c;

    return 0; 

}