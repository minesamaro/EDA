#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    const double pi = M_PI;
    
    double rho, radius, mass;

    cout << "rho value (kg/m^3)" << endl;
    cin >> rho;
    cout << "radius value (m)" << endl;
    cin >> radius;

    mass = 4.0/3 * (rho * pi * pow(radius, 3));
    cout << "mass of the sphere (kg) = " << mass << endl;

    return 0; 
}
