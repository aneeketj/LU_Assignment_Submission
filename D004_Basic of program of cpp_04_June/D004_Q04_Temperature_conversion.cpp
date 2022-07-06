//WAP to convert celsius to fahrenheit

#include<iostream>
using namespace std;

int main(){
    float C, F;

    cout<<endl<<"Enter the temperature in degree centigrade:\t";
    cin>>C;

    F = (C*1.8) + 32;

    cout<<endl<<"The temperature in fahrenfeit is:\t"<<F;
    
    return 0;
}