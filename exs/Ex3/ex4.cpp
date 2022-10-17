#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

/**
 Calculates the square root of a number accordingly to Heron's algorith
 @param x - double to be rounded 
 @param n - integer that represents the number of decimal places to round to 
 @return double - x rounded to n decimal places
*/
double round(double x, unsigned n)
{
    return floor(x * pow(10, n) + 0.5)/pow(10,n);
}

int nInter(double x)
{
    int i=0;
    int y = int(floor(x));
    while (y / 10 != 0)
    {
        y = y / 10;
        i++;
    }
    i++;

    return i;
}


int main()
{
    double x, n;
    do
    {
        cin >> x >> n;
        int integer_part = nInter(x);
        cout << integer_part <<endl;
        cout << setprecision(integer_part + n) << round(x, n) << endl;
    }
    while(!cin.fail());
}