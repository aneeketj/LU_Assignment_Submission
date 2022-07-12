// (i) 	A university has the following rules for a student to qualify for a degree with A as the main subject and B as the subsidiary subject:
//	(a) 	He should get 55 percent or more in A and 45 percent or more in B.
//	(b) 	If he gets less than 55 percent in A he should get 55 percent or more in B. However, he should get at least 45 percent in A.
//	(c) 	If he gets less than 45 percent in B and 65 percent or more in A he is allowed to reappear in an examination in B to qualify.
//	(d) 	In all other cases he is declared to have failed.
//		Write a program to receive marks in A and B and Output 	whether the student has passed, failed or is allowed to reappear in B

#include<iostream>
using namespace std;

int main()
{
    float a, b;
    cout << endl << "Enter percentage marks in subject A:\t";
    cin >> a;

    cout << endl << "Enter percentage marks in subject B:\t";
    cin >> b;

    if ((a>=55 && 45<=b) || ((a<55 && a>=45) && b>=55))
    {
        cout << endl << "Qualified for Degree!";
    }
    else if (b<45 && a>=65)
    {
        cout << endl << "You are allowed to reapper for the EXAM for subject B";
    }
    else 
    {
        cout << endl << "Sorry! You are fail";
    }

    return 0;
}





