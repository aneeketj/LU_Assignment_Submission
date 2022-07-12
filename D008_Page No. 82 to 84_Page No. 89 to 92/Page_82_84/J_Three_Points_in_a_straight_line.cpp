//(j)  	Given three points (x1, y1), (x2, y2) and (x3, y3), write a
//	program to check if all the three points fall on one straight line.

// Slope must be equal for two line

#include <iostream>
using namespace std;

int main(){
    float ax, ay, bx, by, cx, cy;
    float mba, mca;

    cout << endl << "Please Enter Point Ax coordinate xa:\t";
    cin >> ax;
    cout << endl << "Please Enter Point Ay coordinate ya:\t";
    cin >> ay;


    cout << endl << "Please Enter Point Bx coordinate xb:\t";
    cin >> bx;
    cout << endl << "Please Enter Point By coordinate yb:\t";
    cin >> by;

    cout << endl << "Please Enter Point Cx coordinate xc:\t";
    cin >> cx;
    cout << endl << "Please Enter Point Cy coordinate yc:\t";
    cin >> cy;

    cout << endl << "coordingates of point A:\t (" << ax << ", " << ay << ")";
    cout << endl << "coordingates of point B:\t (" << bx << ", " << by << ")";
    cout << endl << "coordingates of point C:\t (" << cx << ", " << cy << ")"; 

    mba = ((by - ay)/(bx - ax));

    cout << endl << "Slope of line AB is : " << mba;

    mca = ((cy - ay)/(cx - ax));

    cout << endl << "Slope of line AC is : " << mca;

    if (mba == mca)
    {
        cout << endl << "As slope is same  -- > Points lie on same Line";
    }
    else 
    {
        cout << endl << "As slope is not same  -- > Points DO NOT lie on same line";
    }

    return 0;

}