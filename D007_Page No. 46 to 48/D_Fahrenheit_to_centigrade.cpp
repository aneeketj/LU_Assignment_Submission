// (d) Temperature of a city in Fahrenheit degrees is input through
// the keyboard. Write a program to convert this temperature
// into Centigrade degrees.

#include<iostream>
using namespace std;

int main(){
    float f, c;


    cout<< "Enter the temperature of city (in Fahrenheit):\t";
    cin>>f;

    c = (f-32)*5/9;

    cout<<endl<<"The equivalent centigrade temperature of\t"<< f <<"\tFahrenhit is\t" << c << "\tCentigrade"; 

    return 0;
}