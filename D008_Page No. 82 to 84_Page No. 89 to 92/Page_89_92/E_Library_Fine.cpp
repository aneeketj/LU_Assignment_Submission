// (e) 	A library charges a fine for every book returned late. For first
//	5 days the fine is 50 paise, for 6-10 days fine is one rupee and
//	above 10 days fine is 5 rupees. If you return the book after 30
//	days your membership will be cancelled. Write a program to
//	accept the number of days the member is late to return the
//	book and display the fine or the appropriate message.


#include <iostream>
using namespace std;

int main(){
    int d;
    float f;

    cout << endl << "Please enter no of days delayed by:\t";
    cin >> d;


    if (d>30)
        cout << endl << "Sorry Your Membership will be cancelled!";
    else if (d<=5)
        f = d*0.5;
    else if (d>5 && d<=10)
        f = (5*0.5) + (d-5)*1;
    else if (d>10 && d<=30)
        f = (5*0.5) + (d-5)*1 + (d-10)*5;        
        
    
    if (d<=30)
        cout << endl << "Your fine is Rs.: " << f;
    else
        cout << endl << "Please enter VALID number of days";

    return 0;
                    
}