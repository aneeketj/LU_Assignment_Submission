#include<iostream>
using namespace std;
int linear(int [],int,int);
void sel (int [], int s);
int *p;

int main()
{
        int s, v, pos, i;

        cout << endl<< "Enter length of array:\t";
        cin >> s;

        p = new int [s];

        for (i=0; i<s; i++)
        {
                cout << endl << "Enter the element:\t";
                cin >> p[i];
        }

        cout << endl << "Which element to find:\t";
        cin >> v;

        sel (p, s);
        pos= linear(p, s, v);

        if (pos == 0)
            cout <<endl << v << "The element is not present in array";
        else
        {
            cout << endl << v <<"The element is found at "<<pos<<"th position";
        }
    return 0;

}
int linear (int a[], int s, int v)
{
        int i,f=0;

        for(i=0; i<s; i++)
        {
            if(a[i] == v)
            {
                f=1;
                return(i+1);
            }
        }
        return(f);
}


void sel (int [], int s)
{
    int i, j, t;

    for (i=0; i<s; i++)
    {
        for (j=i+1; j < s; j++)
        {
            if (p[i]>p[j])
            {
                t = p[i];
                p[i] = p[j];
                p[j] = t;
            }
        }    
    }
}