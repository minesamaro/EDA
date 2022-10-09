#include <iostream>

using namespace std;

int main()
{
    int l = 0, n;


    cin >> n;

    double sum = 0, prod= 1, max = 0, min = 0; //maybe use climits
    int i= 0;

    while ( n != 0)
    {
        i++;
        
        sum += n;
        prod *= n;
        if (max == 0) max = n;
        if (min == 0) min = n;
        if (n > max) max = n;
        if (n< min) min = n;
        cin >> n;
    
    }

    cout << "sum: " << sum << " prod: " << prod << " max: " << max << " min: " << min << " length:" << i;
}