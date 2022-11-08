#include <iostream>
#include <vector>

using namespace std;

void removeDuplicates(vector<int> &v)
{
    bool move = false;

    for (int i = 1; i < v.size(); i++)
    {
       for (int j = 0; j < i; j++)
       {
        if (v.at(i) == v.at(j))
        {
            move = true;
            break;
        }        
       }
       
       if (move)
       {
        for (int k = i+1; k < v.size(); k++)
        {
            v.at(k-1) = v.at(k);
        }
        v.resize(v.size()-1);
        i--;
       }

       move = false;
    }
}


int main()
{
    vector<int> v = {1, 2, 3, 4 , 1, 5 , 8, 6, 3, 3, 5, 8};
    removeDuplicates(v);

    for (int i = 0; i< v.size(); i++) cout << v.at(i) << endl;
}

// for (char c = 'A'; c<= 'Z'; c++;) - all the letters of the alpahbet
