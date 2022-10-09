#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;

    
    int rev = 0;

    cin >> n;

    int init = n;

    while (n / 10 != 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    
    }

    rev = rev * 10 + n;

    cout << rev << endl;
    cout << init <<endl;

    if (rev == init)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

}