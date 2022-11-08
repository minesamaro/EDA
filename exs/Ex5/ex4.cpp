#include <iostream>
#include <string>

using namespace std;

bool sequenceSearch(const string &s, int nc, char c)
{
    int i = 0;
    bool found = false;
    while (i < s.size()- nc)
    {
        if (s.at(i) == c && s.at(i+nc-1) == c)
        {
            found = true;
            int j = 1;
            while( i+j <= i+ nc-1-j)
            {
                if (s.at(i+ j) != s.at(i + nc -1 -j) || s.at(i+j) != c)
                {
                    found = false;                    
                }
                j++;
            }
        }

        i++;
    }

    return found;
}


int main()
{
    cout << sequenceSearch("abbbbbbbbbrfgeiubgusgqwiau", 9, 'b') << endl;
}
