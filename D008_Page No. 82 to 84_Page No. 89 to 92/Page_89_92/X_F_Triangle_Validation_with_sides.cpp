//(f) 	If the three sides of a triangle are entered through the
//	keyboard, write a program to check whether the triangle is
//	valid or not. The triangle is valid if the sum of two sides is
//	greater than the largest of the three sides.

#include <iostream>
using namespace std;

int main()
{

    int a, b, c;

    cout << endl  << "Enter the first side of a triangle:\t";
    cin >> a;

    cout << endl << "Enter the second side of a triangle:\t";
    cin >> b;

    cout << endl << "Enter the third side of a triangle:\t";
    cin >> c;

    if ((a==b) && (b==c))
    {
        cout << endl << "Triangle is VALID";
    }
    else if (a>=b && a>=c)
    {
        cout << endl << "A is largest";
        if((b+c)>a)
        {
            cout << endl << "Triangle is VALID";
        }
        else
        {
            cout << endl << "Triangle is NOT valid";
        }
    }
    else if (b>=c)
    {
        cout << endl << "B is largest";
        if((a+c)>b)
        {
            cout << endl << "Triangle is VALID";
        }
        else
        {
            cout << endl << "Triangle is NOT valid";
        }
    }
    else
    {
        cout << endl << "C is largest";
        if((a+b)>c)
        {
            cout << endl << "Triangle is VALID";
        }
        else
        {
            cout << endl << "Triangle is NOT valid";
        }
    }
    return 0;
}

