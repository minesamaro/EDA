#include <iostream>

using namespace std;

int main()
{
    int l = 0, n;
    bool valid = true;

    cin >> n;

    double sum = 0, prod= 1, max = n, min = n; 
    int i= 0;

    while (valid)
    {
        if (cin.fail())
        {
            if (cin.eof())
            {
                valid = false;
                break;
            }
        }
        i++;
        
        sum += n;
        prod *= n;
        if (n > max) max = n;
        if (n< min) min = n;
        cin >> n;
    
    }

    cout << "sum: " << sum << " prod: " << prod << " max: " << max << " min: " << min << " length:" << i;
}