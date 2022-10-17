#include <iostream>

using namespace std;

int max(int n1, int n2)
{
    if (n1 > n2) return n1;
    else return n2;
}

int min(int n1, int n2)
{
    if (n1 < n2) return n1;
    else return n2;
}

int GCD(int n1, int n2)
{
    int gdc;
    int smallest = min(n1, n2);
    int biggest = max(n1, n2);

    if (smallest == biggest) gdc = smallest;
    else if(smallest == 0) gdc = biggest;
    else gdc = GCD(biggest - smallest, smallest);

    return gdc;
}

void greatestDivider(int n1, int n2, int &divider)
{
    int smallest = min(n1, n2);
    int biggest = max(n1, n2);

    if (smallest == biggest) divider = smallest;
    else if(smallest == 0) divider = biggest;
    else divider = GCD(biggest - smallest, smallest);

    return;
}


int main()
{
    int n1, n2, divider;
    cin >> n1 >> n2;

    greatestDivider(n1, n2, divider);

    cout << GCD(n1, n2) << endl;
    cout << divider;
}