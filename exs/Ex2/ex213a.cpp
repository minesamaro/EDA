#include <iostream>

using namespace std;

int main()
{
    int l, n;

    cout << "length: ";

    cin >> l >> n;

    double sum = n, prod= n, max = n, min = n;

    for ( int i = 2; i <= l; i++)
    {
        cin >> n;
        sum += n;
        prod *= n;
        if (n > max) max = n;
        if (n< min) min = n;
    
    }

    cout << "sum: " << sum << " prod: " << prod << " max: " << max << " min: " << min;
}