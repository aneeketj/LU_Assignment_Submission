// (j)	The policy followed by a company to process customer orders is given by the following rules:
//	(a) 	If a customer order is less than or equal to that in stock and has credit is OK, supply has requirement.
//	(b) 	If has credit is not OK do not supply. Send him intimation.
//	(c) 	If has credit is Ok but the item in stock is less than has order, supply what is in stock. 
//          Intimate to him data the balance will be shipped.
//	        Write a C program to implement the company policy


#include<iostream>
using namespace std;

int main()
{
    int c, s;
    char cred;

    cout << endl << "Enter the number of units required by customer:\t";
    cin >> c;

    cout << endl << "Enter the number of units available in store:\t";
    cin >> s;

    cout << endl << "Do customer has credit? Enter Y for yes and N for No:\t";
    cin >> cred;

    if (cred == 'N' || cred == 'n')
    {
        cout << endl << "Sorry! We can not provide you supply. your credit is NOT OK!";
    }
    else if (s >=c && (cred == 'Y' || cred == 'y'))
    {
        cout << endl << "Supply has requirement!";
    }
    else if (s <= c && (cred == 'Y' || cred == 'y'))
    {
        cout << endl << "We have supply in part, Remaining supply will be shipped to you";
    }

    return 0;

}