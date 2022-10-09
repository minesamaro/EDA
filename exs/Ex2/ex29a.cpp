#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int first_digit = n / 100;
    int second_digit = (n / 10) % 10;
    int third_digit = n % 10;

    if (first_digit == third_digit) cout << "Palindrome";
    else cout << "Not Palindrome";
    
    // cout << first_digit << endl << second_digit << endl<< third_digit << endl;
}