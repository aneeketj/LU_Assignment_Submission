//(l) 	Given a point (x, y), write a program to find out if it lies on the
//	x-axis, y-axis or at the origin, viz. (0, 0).

#include<iostream>
using namespace std;

int main(){
    int x,y;

    cout << endl << "Please enter X coordinate:\t";
    cin >> x;

    cout << endl << "Please enter Y coordinate:\t";
    cin >> y;

    if (x==0 && y==0)
        cout << endl << "The point lies at Origin";
    else if (x==0)
        cout << endl << "The point lies on Y Axis";
    else if (y==0)
        cout << endl << "The point lies on X axis";
    else
        cout << endl << "The point doesn't lie on X-axis, Y-axis OR at Origin";

    return 0;

}
