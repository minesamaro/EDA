#include <iostream>
#include <math.h>

using namespace std;

/**
 Calculates the square root of a number accordingly to Heron's algorith
 @param n - double to be calculated the square root of
 @param precision - double that determinesthe difference between the calculated value and the real value 
 @param maxItr - int represents the number maximum of iterations of the algorithm
 @return double - the square root of n
*/

double mysqrt(double n, double precision, int maxIter)
{
    if (n<0)
    {
         cerr << "Insert a non-negative number";
         return 0;
    }
    int i = 0;
    double rq = 1.0, rqn, dif;

    do
    {
        rqn = (rq + n/ rq)/2;
        dif = n - pow(rqn, 2);
        rq = rqn;
        i++;
        //cout << rqn << i << dif;
    } while (abs(dif) > precision && i < maxIter);
    
    return rqn;
}


int main()
{
    double n, precision;
    int maxIter;

    cout <<" n precision maxIterations ? " ;
    cin >> n >> precision >> maxIter;

    double s = mysqrt(n, precision, maxIter);

    cout << s;
}