#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double a, b, c, d, e, f, x, y;
    
    cout << "a, b, c, d, e, f" << endl;
    cin >> a >> b >> c >> d >> e >> f ;
    
    if (a*e - b*d == 0 && (c*e - b*f ==0 || a*f - c*d == 0 ))
    {
        cerr << "Inconsistent system";
    }
    else if (a*e - b*d == 0)
        cerr << "Impossible system";
    else {
        x = (c*e-b*f) / (a*e-b*d);
        y = (a*f-c*d)/ (a*e-b*d);

        cout << x << endl << y;
    }

    return 0;  
}