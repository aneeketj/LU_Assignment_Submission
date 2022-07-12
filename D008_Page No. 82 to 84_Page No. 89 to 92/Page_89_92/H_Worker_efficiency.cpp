// (h) 	In a company, worker efficiency is determined on the basis of the time required for a worker to complete a particular job. 
//    If the time taken by the worker is between 2 – 3 hours,         then the worker is said to be highly efficient. 
//    If the time required by the worker is between 3 – 4 hours,      then the worker is ordered to improve speed. 
//    If the time taken is between 4 – 5 hours,                       the worker is given training to improve his speed, and 
//    if the time taken by the worker is more than 5 hours,           then the worker has to leave the company. 
//    If the time taken by the worker is input through the keyboard, find the efficiency of the worker.


#include <iostream>
using namespace std;

int main()
{
    float a;

    cout << endl<< "Enter the time required:\t";
    cin >>a;

    if(a<2)
    {
        cout << endl << "IMPOSSIBLE";
    }
    else if (a>=2 && a<=3)
    {
        cout << endl << "Highly Efficient!!!";
    }
    else if (a>3 && a<=4)
    {
        cout << endl << "You need to improve your speed";
    }
    else if (a>4 && a<=5)
    {
        cout << endl << "You need a training to improve your speed";
    }
    else
    {
        cout << endl << "SORRY! You have to leave the company";
    }

    return 0;
}