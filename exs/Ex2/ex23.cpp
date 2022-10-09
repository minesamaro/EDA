#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if (a > 0 && b > 0)
    {
        if (b >  INT_MAX - a)
            cout << "sum overflow" << endl;
    }
    else if (a < 0 && b < 0)
    {
        if ( -b < INT_MAX - 1 + a ) 
           cout << "sum underflow" << endl;   
    }
    else 
        cout << a+b << endl;

}