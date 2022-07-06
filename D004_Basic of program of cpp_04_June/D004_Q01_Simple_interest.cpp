//WAP for simple intrest.

#include<iostream>
using namespace std;

int main(){
    float R;
    int P, T, SI;

    cout<<endl<<"Enter the loan amount (in rupees):\t";
    cin>>P;

    cout<<endl<<"Enter the rate of interest (in percent):\t";
    cin>>R;

    cout<<endl<<"Enter the tenure of Loan (in years):\t";
    cin>>T;

    SI= P*R*T;

    cout<<endl<<"The simple interest on your loan is:\t"<<SI;

    return 0;

}

