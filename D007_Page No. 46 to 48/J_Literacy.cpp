// (j) In a town, the percentage of men is 52. The percentage of
// total literacy is 48. If total percentage of literate men is 35 of
// the total population, write a program to find the total number
// of illiterate men and women if the population of the town is 80,000.


#include<iostream>
using namespace std;

int main(){

    int pop, p, m, w, lm, lw, lt, ilm, ilw, t = 80000;

    m = t*.52; 
    w = t - m;
    lt = t*.48; 
    lm = t*.35;
    lw = lt - lm;

    ilm = m - lm;
    ilw = w - lw;
    pop = lm+lw+ilm+ilw;

    cout << endl << pop;

    cout << endl << "Total Men:\t\t" <<m;
    cout << endl << "Total Women:\t\t" <<w;
    cout << endl << "Total Literate:\t\t" <<lt;
    cout << endl << "Total Literet Men:\t" <<lm;
    cout << endl << "Total Literet Women:\t" <<lw;
    cout << endl << "Total illiteret Men:\t" <<ilm;
    cout << endl << "Total Illiteret Women:\t" <<ilw;

    return 0;
}