#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double inflim, suplim, step;

    cin >> inflim >> suplim >> step;
    
    cout << fixed << setprecision(6) <<  "ang \t "<<  "    sin \t " << "    cos \t " << "   tan \t " << endl;

    for (double i = inflim; i <= suplim; i+= step)
    {
        if (i == 90 ) cout << i << '\t' << sin(i*M_PI/180) << '\t' <<  cos(i*M_PI/180) << '\t' << "inf" << endl;
        else cout << i << '\t' << sin(i*M_PI/180) << '\t' <<  cos(i*M_PI/180) << '\t' << tan(i*M_PI/180) << endl;
    }
}

