#include <iostream>
#include <math.h>
#include <climits>

using namespace std;

int main()
{
    const unsigned long int max = ULONG_MAX;
    cout << max << endl;
    
    for(unsigned long int j = max; j>= 0; j--)
    {
        int prime = 1;
        for (int i = 2; i <= int(sqrt(j)); i++)
        {
            if (j % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
        {
            cout << j << endl;
            break;
        }

        
    }
    
}