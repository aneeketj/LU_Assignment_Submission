//1) WAP TO CAL SUM OF DIGIT AND REVERSE OF A NO. USING POINTER AND UDF

#include<iostream>
using namespace std;

void num (int, int*, int*);

int main()
{
    int n, rev, sum;

    cout << endl << "Enter the Number:\t";
    cin >> n;

    num(n, &rev, &sum);

    cout << endl << "Sum of digit for given number is\t" << sum;
    cout << endl << "Reverse number for given number is\t" << rev;

    return 0;
}

void num (int n, int*r, int *s)
{
    int rem;
    *r = 0;
    *s = 0;

    while(n>0)
    {
        rem = n%10;

        *s+=rem;
        *r=(*r*10)+rem;

        n = n/10;
    }

}