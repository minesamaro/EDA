#include <iostream>
#include <math.h>
#include <complex>

using namespace std;

int main()
{
    double a, b, c, realpart, impart;
    string root = "";

            cout
        << "Solution of Ax^2 + Bx + C = 0 \n Insert the coefficients (A B C): ";
    cin >> a >> b >> c;

    if (b*b - 4 * a * c == 0)
    {
        cout << "The equation has 1 real root: " << -b /( 2*a);
    }
    else if (b*b - 4 * a * c > 0)
    {
        cout << "The equation has 2 real roots: " << (-b + sqrt(b*b - 4*a*c)) / (2*a) << " and " << (-b - sqrt(b*b - 4*a*c)) / (2*a) << endl;
    }
    else
    {
        realpart = (int) (-b / (2*a) * 1000) / 1000.0;
        impart = (int) (sqrt(- (b*b -4*a*c))/ (2*a) * 1000) / 1000.0;
        cout << "The equation has 2 complex roots: " << realpart << "+" << impart << "i" << " and " << realpart << "-" << impart << "i"<< endl;

    }


}