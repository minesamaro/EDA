#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int> &v, int value)
{
    int first = 0;
    int last = v.size() - 1 ;
    bool found = false;
    int middle;

    while(!found & first <= last)
    {
        middle = int((first+last)/2);

        if (v.at(middle) == value) found = true;
        else if (value < v.at(middle)) last = middle -1;
        else first = middle +1;
    }

    if (found) return middle;
    else return -1;
}


int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 15, 35, 56, 78};
    cout << binarySearch(v, 10);
}