// 	(c) 	An Insurance company follows following rules to calculate premium.
//	(1) 	If a person’s health is excellent and the person is between	25 and 35 years of age and lives in a city and is a male
//			then the premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs.
//	(2) 	If a person satisfies all the above conditions except that the sex is female then the premium is Rs. 3 per thousand
//			and her policy amount cannot exceed Rs. 1 lakh.
//	(3) 	If a person’s health is poor and the person is between 25 and 35 years of age and lives in a village and is a male
//			then the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000.
//	(4) 	In all other cases the person is not insured. Write a program to output whether the person should be
//			insured or not, his/her premium rate and maximum amount for which he/she can be insured.


#include<iostream>
using namespace std;

int main(){
	int age;
	char gen, hlt, li;

	cout << endl << "Where do you live enter C - City and V - village?\t";
	cin >> li;

	cout << endl << "Enter your age:\t";
	cin >>age;

	cout << endl << "Tell us about your health E - Excellent, P - Poor\t";
	cin >> hlt;

	cout << endl << "What is your Gender M - Male, F - Female\t";
	cin >> gen;

	if (hlt == 'E' && age <= 35 && age >=25 && li == 'C' && gen == 'M')
		cout << endl << "Congratulations! You can be insured. \nThe premium is Rs. 4 per thousand \nYour maximum policy amount cannot exceed Rs. 2 lakhs";
	
	else if (hlt == 'E' && age <= 35 && age >=25 && li == 'C' && gen == 'F')
		cout << endl << "Congratulations! You can be insured. \nThe premium is Rs. 3 per thousand \nYour maximum policy amount cannot exceed Rs. 1 lakh";
	
	else if (hlt == 'P' && age <= 35 && age >=25 && li == 'V' && gen == 'F')
		cout << endl << "Congratulations! You can be insured. \nThe premium is Rs. 6 per thousand \nYour maximum policy amount cannot exceed Rs. 10,000"; 
	
	else
		cout << endl << "Sorry! We can NOT provide you an insuarance";

	return 0;

}