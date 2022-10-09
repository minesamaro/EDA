#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int nMaxIter, i = 0;
    double delta, rq, rqn, dif, n;

    cout << "insert value(n) delta nMaxIter:  ";
    cin >> n >> delta >> nMaxIter;
    cout << "Inicial estimate: ";
    cin >> rq;

    do
    {
        rqn = (rq + n/ rq)/2;
        dif = n - pow(rqn, 2);
        rq = rqn;
        i++;
    } while (abs(dif) > delta && i < nMaxIter);
    
    cout << rqn << endl;
}