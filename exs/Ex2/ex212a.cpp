#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double delta;
    cin >> delta;
    delta = abs(delta);

    double pi = 4.0;
    double temp;
    int c = -3;
    int i = 0;

    while (abs(pi-temp) > delta && i < 10000)
    {
        cout << pi << endl;
        temp = pi;
        pi = pi + 4.0/ c;
        if (c < 0)
            c= -1*(c-2);
        else c = -1*(c+2);
        cout << abs(pi-temp) << endl;
        i++;
    }

    cout << pi;
}