// (k) 	Given the coordinates (x, y) of a center of a circle and it’s radius,
//	write a program which will determine whether a point lies inside
//	the circle, on the circle or outside the circle.
//	(Hint: Use sqrt( ) and pow( ) functions)

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int r, ox, oy, ax, ay;
    float d;

    cout << endl << "Please enter X coordinate of Center:\t";
    cin >> ox;

    cout << endl << "Please enter Y coordinate of Center:\t";
    cin >> oy;

    cout << endl << "Please enter X coordinate of a point:\t";
    cin >> ax;

    cout << endl << "Please enter Y coordinate of a point:\t";
    cin >> ay;

    cout << endl << "Please enter the radious of a Circle:\t";
    cin >> r;

    d = sqrt(pow((ax - ox),2) + pow((ay - oy),2));

    cout << endl << d;

    if (r==d)
    {
        cout << endl << "Point lies on the circle";
    }
    else if (r>d)
    {
        cout << endl << "Point is INSIDE of a circle";
    }
    else 
    {
        cout << endl << "Point is OUTSIDE of a circle";
    }

    return 0;

}

