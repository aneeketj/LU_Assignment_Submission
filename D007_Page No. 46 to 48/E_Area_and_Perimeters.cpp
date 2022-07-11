// (e) The length & breadth of a rectangle and radius of a circle are
// input through the keyboard. Write a program to calculate the
// area & perimeter of the rectangle, and the area &
// circumference of the circle.

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float l, b, ar, pr, r, ac, cc, pi=3.14;
    cout <<endl<< "Enter the length of a rectangle";
    cin >>l;
    cout <<endl<< "Enter the breadth of a rectangle";
    cin >>b;
    cout <<endl<< "Enter the radious of a circle";
    cin>>r;

    ar = l*b;
    pr = 2*(l+b);
    ac = pi*r*r;
    cc = 2*pi*r;

    cout <<endl << "Area of the given rectangle is:\t" << ar;
    cout <<endl << "Perimeter of the given rectangle is:\t" << pr;
    cout <<endl << "Area of the given circle is:\t"<< ac;
    cout <<endl << "Circumference of the given circle is:\t" << cc;

    return 0;
}