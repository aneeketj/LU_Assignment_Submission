// WAP for area and perimeter of a square.

#include<iostream>
using namespace std;

int main(){
    
    float S, A, P;

    cout<<endl<<"Enter the length of side of square:\t";
    cin>>S;

    A = S*S;
    P = 4*S;
    
    cout<<endl<<"The area of Square is:\t"<<A;
    cout<<endl<<"The perimeter of square is:\t"<<P;

    return 0;
}