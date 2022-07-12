// (g) 	If the three sides of a triangle are entered through the
//	keyboard, write a program to check whether the triangle is
//	isosceles, equilateral, scalene or right angled triangle.

#include <iostream> 
using namespace std;

int main()
{
    float a, b, c;

    cout << endl << "Entre side A:\t";
    cin >> a;

    cout << endl << "Enter side B:\t";
    cin >> b;

    cout << endl << "Enter side C:\t";
    cin >> c; 

    if (a==b && b==c)
    {
        cout << endl << "The triangel is Equilateral";
    }
    else if (a==b || b==c || a==c)
    {
        cout << endl << "The triangel is Isosceles";
    }
    else
    {
        cout << endl << "The triangel is Scalene";
    }
}