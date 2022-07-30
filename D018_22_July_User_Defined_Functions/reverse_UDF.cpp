//specially for ariyanta try to find reverse using udf.


#include<iostream>
using namespace std;
int reverse(int);
int main()
{
    int num, rnumber;

    cout << endl << "Enter the number:\t";
    cin>>num;

    rnumber=reverse(num);

    cout<<endl<<"REVERSE Number is\t"<<rnumber;

    return 0;
}

int reverse(int n)
{
    
    int rem, rnumber=0;

    while(n>0)
    {
        rem=n%10;
        rnumber=(rnumber*10)+rem;
        n=n/10;
    }

    return rnumber;

}
