//(a) 	If cost price and selling price of an item is input through the
//	keyboard, write a program to determine whether the seller has
//	made profit or incurred loss. Also determine how much profit
//	he made or loss he incurred.


#include<iostream>
using namespace std;

int main(){
	int c, s, d;

	cout << endl << "Enter the selling price in rupees:\t";
	cin >> s;
	cout << endl << "Enter the cost price in rupees:\t\t";
	cin >> c;

	d = s - c;

	if (d < 0)
	cout << endl << "The seller is in loss and the total loss in rupees is:\t" << d;
	else if (d>0)
	cout << endl << "The seller is in profit and the total profit in rupees is:\t" << d;
	else
	cout << endl << "No Loss No Profit";

	return 0;
}