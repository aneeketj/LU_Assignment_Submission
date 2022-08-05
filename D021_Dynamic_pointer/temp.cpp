#include<iostream>
using namespace std;
void check_prime(int,int *);
int main()
{
    int num ,prime=0;

    cout<<"Enter the number\t:";
    cin>>num;

    check_prime(num, &prime);

    if(prime==0)
    {
        cout <<endl << "This is a prime number";
    }
    else
    {
        cout << endl << "This is not a prime number";
    }
    return 0;
}

void check_prime(int n, int *prime)
{
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            *prime=1;
            break;
        }
    }
}