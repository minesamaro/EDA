#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &v, char type = 'a')
{
    // ascending order
    int i;
    if (type == 'a')
    {
        for (i = 0; i < v.size() - 1; i++)
        {
            bool swap = false;

            for (int j = i; j < v.size() - 1; j++)
            {

                if (v.at(j) > v.at(j + 1))
                {
                    int t = v.at(j);
                    v.at(j) = v.at(j + 1);
                    v.at(j + 1) = t;
                    swap = true;
                }
            }
            if (!swap)
                break;
        }
    }

    else if (type == 'd')
    {
        for (i = 0; i < v.size() - 1; i++)
        {
            bool swap = false;

            for (int j = i; j < v.size() - 1; j++)
            {

                if (v.at(j) < v.at(j + 1))
                {
                    int t = v.at(j);
                    v.at(j) = v.at(j + 1);
                    v.at(j + 1) = t;
                    swap = true;
                }
            }
            if (!swap)
                break;
        }
    }

}

int main()
{
    vector<int> v = {1, 5, 5, 6, 2, 78, 33};
    //bubbleSort(v);
    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << endl;
    bubbleSort(v, 'd');
    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << endl;

    
}