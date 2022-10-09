#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double pi = 4.0;
    int c = -3;

    for (int i=1; i<= n; i++)
    {
        cout << pi << endl;
        pi = pi + 4.0/ c;
        if (c < 0)
            c= -1*(c-2);
        else c = -1*(c+2);
        cout << c << endl;
    }

    cout << pi;
}