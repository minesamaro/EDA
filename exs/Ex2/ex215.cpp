#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned) time(NULL));
    
    int op1, op2, ans, res;
    op1 = int( 2 + (rand() % 8));
    op2 =  int( 2 + (rand() % 8));

    res = op1 * op2;

    cout << op1 << " * " << op2 << " ?" << endl;
    const clock_t begin_time = clock();
    cin >> ans;

    double time_span = double(clock() - begin_time) / CLOCKS_PER_SEC;
    if (ans != res) cout << "Very bad, the answer is " << res;
    else if (time_span < 5) cout << "Good";
    else if (time_span <= 10) cout << "Satisfactory";
    else cout << "Insufficient"; 

    cout << endl << time_span << " seconds";


}