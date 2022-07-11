//(f) 	If the ages of Ram, Shyam and Ajay are input through the
//	keyboard, write a program to determine the youngest of the
//	three.

#include <iostream>
using namespace std;

int main(){
    int r, s, a;

    cout << endl << "Enter age of Ram:\t";
    cin >> r;

    cout << endl << "Enter age of Shyam:\t";
    cin >> s;

    cout << endl << "Enter age of Ajay:\t";
    cin >> a;

    if (r<s && r<a)
    cout << endl << "Ram is younger";
    else if (s<r && s<a)
    cout << endl << "Shyam is younger";
    else 
    cout << endl << "Ajay is younger";

    return 0;
}