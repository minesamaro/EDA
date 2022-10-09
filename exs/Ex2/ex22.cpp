#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int max = a;
    int min = a;

    if (a <= b  && a <= c)
    {
        min = a;
    }
    else if (b <= a  && b <= c)
    {
        min = b;
    }
    else 
       { min = c;}
    
    
    
    if (a >= b  && a >= c)
    {
        max = a;
    }
    else if (b >= a  && b >= c)
    {
        max = b;
    }
    else 
        max = c;
    


    cout << "Biggest number: " << max << endl;
    cout << "Smallest number: " << min << endl;

    cout << "Ordered numbers: " << max << " " << a + b + c - max -min << " " << min << endl;
    

}