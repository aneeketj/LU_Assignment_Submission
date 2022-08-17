#include<iostream>
using namespace std;
int linear(int [], int, int);
void sel(int [], int size);
int *p;

int main()
{
        int size, find, pos, i;

        cout << endl<< "Enter length of array:\t";
        cin >> size;

        p = new int [size];

        for (i=0; i<size; i++)
        {
                cout << endl << "Enter the element:\t";
                cin >> p[i];
        }

        cout << endl << "Which element to find:\t";
        cin >> find;

        sel (p, size);
        pos= linear(p, size, find);

        if (pos == 0)
            cout <<endl << find << "The element is not present in array";
        else
        {
            cout << endl << find <<"The element is found at "<< pos <<"th position";
        }
    return 0;

}
int linear (int a[], int size, int find)
{
        int i,f=0;

        for(i=0; i<size; i++)
        {
            if(a[i] == find)
            {
                f=1;
                return(i+1);
            }
        }
        return(f);
}


void sel (int [], int size)
{
    int i, j, t;

    for (i=0; i<size; i++)
    {
        for (j=i+1; j < size; j++)
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