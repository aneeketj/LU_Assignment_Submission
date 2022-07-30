// find max and min in array with UDF

#include <iostream>
using namespace std;

int Maxnum(int [],int);
int Minnum(int [],int);

int main()
{
	int i, a[5], max, min;

	for(i=0;i<5;i++)
    {
        cout << endl << "Enter the Number:\t";
        cin>>a[i];
    }
	

	max = Maxnum(a,5); 
	min = Minnum(a,5); 

	
	cout<< endl << "Largest number in the array is:\t" << max;
	cout<<endl << "Smallest number in the array is:\t" << min;

return 0;
}

int Maxnum(int a[],int n)
{
	int i, max;
	max = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
			max =a[i];
	}
	return max; 
}

int Minnum(int a[],int n) 
{	
	int i, min;
	min = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
			min =a[i];
	}
	return min; 
}