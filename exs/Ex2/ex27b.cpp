#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    for (int n = 2; n <= 1000; n++)
    {

        int prime = 1;

        for (int i = 2; i <= int(sqrt(n)); i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
            
        }
        if (prime) cout << n << endl;
    }
}