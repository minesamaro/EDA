#include <iostream> 

using namespace std;

int main()
{
    int a, b, c, max;

    cin >> a >> b >> c;

    if (a >= b  && a >= c)
    {
        max = a;
    }
    else if (b >= a  && b >= c)
    {
        max = b;
    }
    else 
        max = c;

    if ( a <= 0 || b <= 0 || c <= 0)
    {
        cerr << "Please input only positive integers" << endl;
    }
    else if (a + b + c - max  < max)
    {
        cout << "It is not possible" << endl;
    }
    else 
        cout << "It is possible" << endl;
}