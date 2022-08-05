#include<iostream>
using namespace std;

void swap(int *, int *);

int main()
{
    int a,b;
    cout << endl << "Enter a number in A:\t";
    cin >> a;

    cout << endl << "Enter a number in B:\t";
    cin >> b;

    swap(&a,&b);

    cout << endl << "A after swap is\t" <<a;
    cout << endl << "B after swap is\t" <<b;

    return 0;
}

void swap (int *p, int *q)
{
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
}



