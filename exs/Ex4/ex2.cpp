#include <iostream>
#include <vector>

using namespace std;

void readVector(vector<int> &v)
{
    int elem;
    bool valid = true;
    cin >> elem;
    while (valid)
    {
        if (cin.fail())
        {
            if (cin.eof())
            {
                valid = false;
                break;
            }
        }
        else
        {
            v.push_back(elem);
            cin >> elem;
        }
    }
}

size_t findValueInVector(const vector<int> &v, int value, size_t pos1, size_t pos2)
{
    int i = pos1;
    bool exists = false;
    while (i <= pos2)
    {
        if (v.at(i) == value)
        {
            exists = true;
            break;
        }
        i++;
    }
    if (exists)
        return i;
    else
        return -1;
}

void findMultValuesInVector(const vector<int> &v, int value, size_t pos1, size_t pos2, vector<size_t> &index)
{
    int i = pos1;
    while (i <= pos2)
    {
        if (v.at(i) == value)
        {
            index.push_back(i);
        }
        i++;
    }

    return;
}

int main()
{
    vector<int> v;
    vector<size_t> index;
    size_t nElem = 10;

    readVector(v);
    // v = {25, 25, 36, 89, 56, 56, 56, 65, 87, 25};
    // for (int i = 0; i < v.size(); i++) cout << v.at(i) << endl;

    int i = findValueInVector(v, 56, 2, 5);
    cout << i << endl;
    findMultValuesInVector(v, 56, 3, 7, index);
    // cout << occurences;
    for (int i = 0; i < index.size(); i++)
        cout << index[i] << endl;
}
