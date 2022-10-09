#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double e = 1.0;
    int fat = 1; // factorial of zero

    for (int i=1; i<= n; i++)
    {
        cout << e << endl;
        fat *= i;
        e = e + 1.0/ fat;
        cout << fat << endl;
    }

    cout << e;
}