#include <iostream>

using namespace std;

void readArray(int a[], size_t nElem)
{
    for (int i = 0; i< nElem; i++)
    {
        cout << i << ": "; 
        cin >> a[i];
    } 
}

int findValueInArray(const int a[], size_t nElem, int value, size_t pos1 = 0, size_t pos2 = 10)
{
    int i = pos1;
    bool exists = false;
    while (i <= pos2)
    {
        if (a[i] == value) 
        {
            exists = true;
            break;
        }
        i++;
    }
    if (exists) return i;
    else return -1;
    
}

size_t findMultValuesInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2, size_t index[])
{
    int i = pos1;
    size_t occur = 0;
    while (i <= pos2)
    {
        if (a[i] == value) 
        {
            index[i] = i;
            occur ++;
        }
        else index[i] = -1;
        i++;
    }
    
    return occur;
}

int main()
{
    const size_t ARRAY_SIZE = 10;
    //int a[ARRAY_SIZE];
    size_t index[ARRAY_SIZE];

    //readArray(a, ARRAY_SIZE);
    int a[ARRAY_SIZE] = {25, 25, 36, 89, 56, 56, 56, 65, 87, 25};
    //for (int i = 0; i < ARRAY_SIZE; i++) cout << a[i] << endl;
    
    int  i = findValueInArray(a, ARRAY_SIZE, 56, 2, 5);
    cout << i << endl;
    int occurences = findMultValuesInArray(a, ARRAY_SIZE, 56, 3, 7, index);
    cout << occurences;
    //for (int i = 0; i < ARRAY_SIZE; i++) cout << index[i] << endl;
      


}