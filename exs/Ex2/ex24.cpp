#include <iostream>

using namespace std;

int main()
{
    double weight,  cost = 0.0;

    cin >> weight;

    if (weight <= 500)
        cost = 5;
    else if (weight <= 1000)
        cost = 5 + 1.5 * ((weight - 500) / 100);
    else
        cost = 12.5 + 5 * (( weight - 1000) / 250);

    cout << cost << endl; 
}