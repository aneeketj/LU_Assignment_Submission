// (k) A cashier has currency notes of denominations 10, 50 and
// 100. If the amount to be withdrawn is input through the
// keyboard in hundreds, find the total number of currency notes
// of each denomination the cashier will have to give to the
// withdrawer.

#include<iostream>
using namespace std;

int main(){
    int c, exit;

    cout << endl << "Enter the Amount to be withdrawn:\t";
    cin >> c;

    cout << endl << "Number of currency 100 Notes:\t" << c/100;
    cout << endl << "Number of currency 50 Notes:\t" << (c%100)/50;
    cout << endl << "Number of currency 10 Notes:\t" << ((c%100)%50)/10;
    cout << endl << "Total withrdrawable amouut with this scenarios is:\t" << (c/100)*100 + ((c%100)/50)*50 + (((c%100)%50)/10)*10;
    cout << endl << "That is " << c - ((c/100)*100 + ((c%100)/50)*50 + (((c%100)%50)/10)*10) << " rupees less.";

    return 0;
}