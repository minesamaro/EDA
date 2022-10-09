#include <iostream>
#include <math.h>

using namespace std;

bool prime(int n)
{
    int prime = 1;

    for (int i = 2; i <= int(sqrt(n)); i++)
    {
        if (n % i == 0)
            prime = 0;
        break;
    }

    return prime;
}

int main()
{
    int n;

    cin >> n;
    cout << n <<'=';
    int i = 2;

    while (i <= n)
    {
        if (prime(i) && (n % i == 0))
        {
            cout << i << 'x';
            n = n / i;
        }
        else i++; 
    }
}