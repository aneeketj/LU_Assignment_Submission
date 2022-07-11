// (b) The distance between two cities (in km.) is input through the
// keyboard. Write a program to convert and print this distance
// in meters, feet, inches and centimeters.

#include<iostream>
using namespace std;

int main(){
    int km, mt, cm;
    float ft, in;

    cout<<endl<<"Please enter the distance (in km):\t";
    cin>>km;

    mt = km*1000;
    cm = km*100000;
    ft = km*3280.84;
    in = ft*12;

    cout<<endl<<"The distance in meter is:\t"<<mt;
    cout<<endl<<"The distance in feet is:\t"<<ft;
    cout<<endl<<"The distance in inches is:\t"<<in;
    cout<<endl<<"The distance in centimeters is:\t"<<cm;

    return 0;
}