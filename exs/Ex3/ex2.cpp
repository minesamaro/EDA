#include <iostream>
#include <math.h>

using namespace std;

/**
 Checks if a number is prime
 @param n - integer to determine if it is prime
 @return true if n is prime or false if n is not prime
*/
bool isPrime(int n)
{
    bool prime = true;
    for (int i = 2; i<= int(sqrt(n)); i++)
    {
        if (n % i == 0)
            prime = false;
            break;
    }
    return prime;
}


int main()
{
    int n;
    cin >> n;
    bool prime = isPrime(n);

    if (prime) cout << "Is Prime";
    else cout << "Isn't Prime";

    return 0;

}