#include <iostream>

using namespace std;

int max(int n1, int n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}

int min(int n1, int n2)
{
    if (n1 < n2)
        return n1;
    else
        return n2;
}

int GCD(int n1, int n2)
{
    int gdc;
    int smallest = min(n1, n2);
    int biggest = max(n1, n2);

    if (smallest == biggest)
        gdc = smallest;
    else if (smallest == 0)
        gdc = biggest;
    else
        gdc = GCD(biggest - smallest, smallest);

    return gdc;
}

bool readFraction(int &numerator, int &denominator)
{
    char op;
    if (cin >> numerator >> op >> denominator && op == '/')
        return true;
    else
        return false;
}

void reduceFraction(int &numerator, int &denominator)
{
    int gcd = GCD(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
}


void fracOperation(int num1, int den1, int num2, int den2, char op, int &resnum, int &resden)
{

    switch (op)
    {
    case '+':
        num1 = num1 * den2;
        num2 = num2 * den1;
        den1 = den1 * den2;
        den2 = den1 * den2;
        resnum = num1 + num2;
        resden = den1;
        break;

    case '-':
        num1 = num1 * den2;
        num2 = num2 * den1;
        den1 = den1 * den2;
        den2 = den1 * den2;
        resnum = num1 - num2;
        resden = den1;
        break;

    case '*':
        resnum = num1 * num2;
        resden = den1 * den2;
        break;

    case '/':
        resnum = num1 * den2;
        resden = num2 * den1;
        break;
    }

    reduceFraction(resnum, resden);
}

int main()
{
    /**
    int numerator, denominator;

    bool fraction = readFraction(numerator, denominator);
    if (fraction)
    {
    reduceFraction(numerator, denominator);
    cout << numerator << '/' << denominator;
    }
    */

    int num1 = 2;
    int num2 = 3;
    int den1 = 3;
    int den2 = 5;
    int resnum, resden;

    char op = '/';

    fracOperation(num1, num2, den1, den2, op, resnum, resden);

    cout << num1 << '/' << den1 << ' ' << op << ' ' << num2 << '/' << den2 << " = ";
    cout << resnum << '/' << resden;
}

// falta testar
// podia ter feito uma função para cada operação mas ia dar ao mesmo mais ou menos