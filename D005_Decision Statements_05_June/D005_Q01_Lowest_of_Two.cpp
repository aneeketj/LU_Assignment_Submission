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
        cout<<endl<<"The lowest number is:\t"<<b;
    }
    else
    {
        cout<<endl<<"The lowest number is:\t"<<a;
    }

    return 0;
}
