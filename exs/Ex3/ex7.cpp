#include <iostream>
#include <cctype>

using namespace std;

bool readInt(int &x)
{
    // check the conditions
    cin >> x;
    if (cin.fail() || (cin.peek() != '\n'))
    {
        cin.clear();
        cin.ignore(100000, '\n');
        return false;
    }
    else
    {
       return true; 
    }
}

int main()
{
    int x;

    cout << readInt(x) << endl;
    cout << readInt(x) << endl;
    cout << readInt(x) << endl;
    cout << readInt(x) << endl;
    return 0;
}