// (a) Ramesh’s basic salary is input through the keyboard. His
// dearness allowance is 40% of basic salary, and house rent
// allowance is 20% of basic salary. Write a program to calculate his gross salary.

#include<iostream>
using namespace std;

int main(){
    int b, d, h, t;

    cout<<endl<<"Enter the basic salaryo of Ramesh:\t";
    cin>>b;

    d = b*0.4;
    h = b*0.2;
    t = b+d+h;

    cout<<endl<<"Dearness Allowance of Reamesh is:\t"<<d;
    cout<<endl<<"Rent Allowance of Reamesh is:\t\t"<<h;
    cout<<endl<<"Total Salary of Reamesh is:\t\t"<<t;

    return 0;
}