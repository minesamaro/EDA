#include <iostream>
#include <ctime>


using namespace std;

time_t time_Elapsed()
{
    static int beg = time(NULL);
    return time(NULL) - beg;
}



int main()
{
   char t;
   cout << time_Elapsed() << endl; 
   cin >> t;
   cout << time_Elapsed() << endl;
   cin >> t;
   cout << time_Elapsed() << endl;
   
}