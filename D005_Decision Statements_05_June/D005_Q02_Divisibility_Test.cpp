//check the no to be divisible by 5

#include<iostream>
using namespace std;

int main(){
    int a, rem;

    cout<<endl<<"Enter the number to test:\t";
    cin>>a;

    rem = a%5;

    if(rem == 0)
    {
        cout<<endl<<"The number is divisible by 5";
    }
    else
    {
        cout<<endl<<"The number is not divisible by 5";
    }

    return 0;

}