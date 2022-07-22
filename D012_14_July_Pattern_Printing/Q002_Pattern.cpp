/*
1   2   3   4   5   
6   7   8   9   10
11  12  13  14  15
16  17  18  19  20
21  22  23  24  25
*/




#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i, j, num, temp=0;
    cout << endl << "Enter number of iterations:\t";
    cin >> num;
    for (i=1; i<=num; i++)
    {   
        for (j=1; j<=num; j++)
        {
            cout << setw(4)<< j+temp;
        }
        temp = temp+num;
        cout << endl;
    }

    cout << endl << "\t\t\tEND OF THE PROGRAM";

    return 0;

}

