// (g) 	If the three sides of a triangle are entered through the
//	keyboard, write a program to check whether the triangle is
//	isosceles, equilateral, scalene or right angled triangle.

#include <iostream> 
using namespace std;
#include <math.h>

int main()
{
    float a, b, c;

    cout << endl << "Entre side A:\t";
    cin >> a;

    cout << endl << "Enter side B:\t";
    cin >> b;

    cout << endl << "Enter side C:\t";
    cin >> c; 

    if (((sqrt((a*a) + (b*b))) == c) || ((sqrt((b*b) + (c*c))) == a) || ((sqrt((a*a) + (c*c))) == b) )
        cout << endl << "It is a Right Angle Triangle and ";
    else 
        cout << endl << "it is Not a right angled Triangle but ";


    if (a==b && b==c)
    {
        cout << "The triangel is Equilateral";
    }
    else if (a==b || b==c || a==c)
    {
        cout << "The triangel is Isosceles";
    }
    else
    {
        cout << "The triangel is Scalene";
    }
}