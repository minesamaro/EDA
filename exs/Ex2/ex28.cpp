#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << fixed << setprecision(6) <<  "ang \t "<<  "    sin \t " << "    cos \t " << "   tan \t " << endl;

    for (int i = 0; i <=90; i+=15)
    {
        if (i == 90) cout << i << '\t' << sin(i*M_PI/180) << '\t' <<  cos(i*M_PI/180) << '\t' << "inf" << endl;
        else cout << i << '\t' << sin(i*M_PI/180) << '\t' <<  cos(i*M_PI/180) << '\t' << tan(i*M_PI/180) << endl;
    }
}

