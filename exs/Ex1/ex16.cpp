#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    double a,b,c, s, area;

    a = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
    b = sqrt(pow((x3-x2), 2) + pow((y3-y2), 2));
    c = sqrt(pow((x1-x3), 2) + pow((y1-y3), 2));

    s = (a+b+c)/ 2;

    area = sqrt(s* (s-a) * (s-b) * (s-c));

    cout << area ;

}