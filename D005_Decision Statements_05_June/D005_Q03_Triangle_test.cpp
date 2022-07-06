//check if triangle is possible if angles are entered.

#include<iostream>
using namespace std;

int main(){
    float A1, A2, A3, SUM;

    cout<<endl<<"Enter the first angle in degree:\t";
    cin>>A1;

    cout<<endl<<"Enter the second angle in degree:\t";
    cin>>A2;

    cout<<endl<<"Enter the third angle in degree:\t";
    cin>>A3;

    SUM = A1+A2+A3;

    if(SUM!=180)
    {
        cout<<endl<<"This combination of angles DOES NOT make a triangle";

    }
    else
    {
        cout<<endl<<"This combination of angles WILL make a triangle";
    }
    
    return 0;

}