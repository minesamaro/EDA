#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    double x;
    cout << "n: ";
    cin >> n;

    cout << endl << "x: ";
    cin >> x;

    double e = 1.0;
    int fat = 1; // factorial of zero

    for (int i=1; i<= n; i++)
    {
        cout << e << endl;
        fat *= i;
        if (i%2 == 0)
        e = e + pow(x, i)/ fat;
        else 
        e = e - pow(x, i) / fat;
        
    }

    cout << e;
}