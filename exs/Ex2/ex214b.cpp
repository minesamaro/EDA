#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int nMaxIter, i = 0;
    double delta, rq, rqn, dif, n, num;

    cout << "insert value(n) delta nMaxIter:  ";
    cin >> n >> delta >> nMaxIter;
    cout << "Inicial estimate: ";
    cin >> rq;

    //determine the number of decimal places in delta
    int count = 0;
    num = abs(delta);
    num = num - int(num);
    while (num != 0)
    {
        num = num * 10;
        count = count + 1;
        num = num - int(num);
    }

    do
    {
        rqn = (rq + n/ rq)/2;
        dif = n - pow(rqn, 2);
        rq = rqn;
        i++;
    } while (abs(dif) > delta && i < nMaxIter);
    
    cout << setprecision(count + 1) << "Heron's algorithm: " << rqn << "\t C++ library: " << sqrt(n) << endl;
}