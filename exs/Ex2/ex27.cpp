#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;

    cin >> n;
    int prime = 1;

    for (int i = 2; i<= int(sqrt(n)); i++)
    {
        if (n % i == 0)
            prime = 0;
            break;
    }

    cout << prime << endl;
}