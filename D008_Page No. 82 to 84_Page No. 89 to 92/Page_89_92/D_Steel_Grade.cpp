// (d) 	A certain grade of steel is graded according to the following
//		conditions:
//			(i) 	Hardness must be greater than 50
//			(ii) 	Carbon content must be less than 0.7
//			(iii) 	Tensile strength must be greater than 5600
//	The grades are as follows:
//		Grade is 10 if all three conditions are met         		Grade is 9 if conditions (i) and (ii) are met
//		Grade is 8 if conditions (ii) and (iii) are met     		Grade is 7 if conditions (i) and (iii) are met
//		Grade is 6 if only one condition is met             		Grade is 5 if none of the conditions are met

//	Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel
//	under consideration and output the grade of the steel.

#include<iostream>
using namespace std;

int main(){
    int h, t;
    float c;

    cout << endl << "Enter the Hardness Value:\t";
    cin >>h; 

    cout << endl << "Enter the Carbon Content:\t";
    cin >>c; 

    cout << endl << "Enter the Tensile Strength:\t";
    cin >>t; 

    if (h>50 && c<0.7 && t>5600)
        cout << endl << "GRADE 10 steel"; 
    else if (h>50 && c<0.7 && t<=5600)
        cout << endl << "GRADE 9 steel"; 
    else if (h<=50 && c<0.7 && t>5600)
        cout << endl << "GRADE 8 steel"; 
    else if (h>50 && c>=0.7 && t>5600)
        cout << endl << "GRADE 7 steel"; 
    else if (h<=50 && c>=0.7 && t<=5600)
        cout << endl << "GRADE 5 steel";
    else
        cout << endl << "GADE 6 steel";

    return 0;   

}