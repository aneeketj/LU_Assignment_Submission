// (c) If the marks obtained by a student in five different subjects are input through the keyboard, 
// find out the aggregate marks and percentage marks obtained by the student. 
// Assume that the maximum marks that can be obtained by a student in each subject is 100.

#include<iostream>
using namespace std;

int main(){
    int sub1, sub2, sub3, sub4, sub5, per, total;

    cout<<endl<<"Enter marks obtained in SUB1 (MAX 100):\t";
    cin>>sub1;
    cout<<endl<<"Enter marks obtained in SUB2 (MAX 100):\t";
    cin>>sub2;
    cout<<endl<<"Enter marks obtained in SUB3 (MAX 100):\t";
    cin>>sub3;
    cout<<endl<<"Enter marks obtained in SUB4 (MAX 100):\t";
    cin>>sub4;
    cout<<endl<<"Enter marks obtained in SUB5 (MAX 100):\t";
    cin>>sub5;

    total = sub1+sub2+sub3+sub4+sub5;
    per = total*0.2;

    cout<<endl<<"The total marks obtained are:\t"<<total;
    cout<<endl<<"The aggregate marks obtaind are:\t"<<total;
    cout<<endl<<"The percentage marks obtained are:\t"<<per;

    return 0;
}