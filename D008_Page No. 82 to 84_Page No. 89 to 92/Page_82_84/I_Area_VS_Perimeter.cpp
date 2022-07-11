//(i) 	Given the length and breadth of a rectangle, write a program to
//	find whether the area of the rectangle is greater than its
//	perimeter. For example, the area of the rectangle with length = 5
//	and breadth = 4 is greater than its perimeter.

#include <iostream>
using namespace std;

int main(){
    int l, b, a, p;

    cout << endl << "Please enter length of a rectangle:\t";
    cin >> l;
    cout << endl <<"Please enter breadth of a reactangle:\t";
    cin >> b;

    a = l*b;
    p = 2*(l+b);

    if (a>p)
        cout << endl << "Area of given rectangle is GREATER than the Perimeter";
    else if (a<p)
        cout << endl << "Area of given rectangle is SMALLER than the Perimeter";
    else 
        cout << endl << "Boath area and perimeter of the given rectangle are EQUAL";

    return 0;

}