// 1.	WAP to check if the entered no is armstrong or not.
//          An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. 
//          An Armstrong number of four digits is an integer such that the sum of the fourth power of its digits is equal to the number itself.
//              eg. 0, 1, 153, 370, 371 and 407; 1634, 8208 and 9474

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num, temp1, p=0, m=0, o;
    double a = 0;

    cout << endl << "Enter the number\t";
    cin >> num;
    temp1 = num;
    o = num;

    while (temp1 >= 1)
    {
        p++;
        temp1 = temp1/10;
    }

    cout << endl << "Power Factor\t\t" << p;

    while (num>=1)
    {
        m = num%10;
        a = a + pow(m,p);
        num = num/10;
    }

    cout << endl << "\nThe Amstrong logic gives\t" << a;
    cout << endl << "\nThe Origninal number is\t\t" << o; 

    if(o == a)
        cout << endl << "\n\t\t\t\t\t\tIts a Armstrong Number!\n";
    else 
        cout << endl << "\n\t\t\t\t\t\tNot a Amstrong Number\n";

    cout << endl << "\n\nEND OF THE PROGRAM";

    return 0;

}