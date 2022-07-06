//WAP for area and perimeter of a rectangle.

#include<iostream>
using namespace std;

int main(){
    float l, w, A, P;

    cout<<endl<<"Enter the Length of the Rectangle:\t";
    cin>>l;

    cout<<endl<<"Enter the width of the Rectangle:\t";
    cin>>w;

    A = l*w;

    P = 2*l + 2*w;

    cout<<endl<<"The area of Rectangle is:\t"<<A;
    cout<<endl<<"The pertimeter of Rectangle is:\t"<<P;

}