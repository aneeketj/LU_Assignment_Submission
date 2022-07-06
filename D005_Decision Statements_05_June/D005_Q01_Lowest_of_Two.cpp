//check lowest from two no.

#include<iostream>
using namespace std;

int main(){
    int a, b;

    cout<<endl<<"Enter the first Number:\t";
    cin>>a;

    cout<<endl<<"Enter the second Number:\t";
    cin>>b;

    if(a>b)
    {
        cout<<endl<<"The largest number is:\t"<<a;
    }
    else
    {
    cout<<endl<<"The largest number is:\t"<<b;
    }

    return 0;
}