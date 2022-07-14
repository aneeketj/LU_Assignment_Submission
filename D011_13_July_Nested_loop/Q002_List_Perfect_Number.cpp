// 2.  WAP to print perfect no from 1 to 100.
//      perfect number, a positive integer that is equal to the sum of its proper divisors. 
//      The smallest perfect number is 6, which is the sum of 1, 2, and 3.

#include<iostream>
using namespace std;

int main()
{
    int hl, num, i, pnum, temp;

    cout << endl << "Define higher Limit:\t";
    cin >> hl; 

    cout << "\nList of perfect Numbers:"; 

    for (num=1; num<=hl; num++)
    {
        i=1;
        pnum = 0;
        while(i<num)
        {
            temp = num%i;
            if(temp==0)
            {
                pnum = pnum+i;
            }
            i++;
        }

        if (pnum == num)
        {
            cout << " " << num;
        }
        
    }

    cout << endl << "\n\t\tEnd of the Program";

    return 0;
    
}