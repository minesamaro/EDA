#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char input, operation;
    bool op1 =1 , op2 = 0;
    string n1 = "", n2 = "";
    
    // user guide to the calculator
    cout << "Welcome! To perform an operation write [operand] [operation] [operand] \n To save contents of the display to memory, write M \n To clear all memory contents, write MC \n To add the current value to memory, write M+ \n To subtract the current value, write M- \n To show all contents of memory, write MR \n To clear the contents of display, write C" << endl;
    
    while(1)
    {
        cin >> input;
        if((isdigit(input) || input == '.') && op1 == 1 )
        {
            n1 += input;
        }
        break;
    }
    cout << n1;


}
