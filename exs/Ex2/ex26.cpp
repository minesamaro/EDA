#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    double q, j;

    cin >> n >> q >> j;

    cout << q* pow((1+ j/100), n);
}