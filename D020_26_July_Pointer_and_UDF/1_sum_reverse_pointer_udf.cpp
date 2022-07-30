//1) WAP TO CAL SUM OF DIGIT AND REVERSE OF A NO. USING POINTER AND UDF

#include<iostream>
using namespace std;

int reverse(int);
int sum(int);

int main()
{
    int num, add, reve;
    cout << endl << "Enter the Number:\t";
    cin >> num;

    add = sum(num);

    reve = reverse(num);

    cout << endl << "sum is \t" << add;
    cout << endl << "reverse is \t" << reve;

    return 0;   
}

int sum(int n)
{
    int  add=0, i, digit=0, temp=n;

    while (temp > 0) 
    {
        digit++;
        temp = temp/10;
        // cout << endl << digit;
    }

    temp = n;

    while (temp>0)
    {
        add = add + (temp%10);
        temp = temp/10;
        // cout << endl << add;
    }

    return add;
}


int reverse(int n)
{
    int rem, rev=0;

    while (n>0)
    {
        rem = n%10;
        rev = rem + (rev*10);
        n = n/10;
    }
    return rev;
}
