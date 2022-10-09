#include <iostream>

using namespace std;

int main()
{
    int h1, m1, s1, h2, m2, s2;
    char c;

    cout << "Time1 (hours minutes seconds) ? ";
    cin >> h1 >> c >> m1>> c >> s1;
    cout << "Time2 (hours minutes seconds) ? ";
    cin >> h2 >> m2 >> s2;

    int time, seconds, min, hours, days;

    time = s1 + s2;
    seconds = time % 60;
    time = time / 60 + m1 + m2;
    min = time % 60;
    time = time / 60 + h1 + h2;
    hours = time % 24;
    days = time / 24;

    cout << " Time1 + Time2 = ";

    if (days > 0) {
        cout << days << (days == 1 ? " day, " : " days ");
    }
    cout <<  hours << " hours, " << min << " minutes and " << seconds << " seconds" << endl;

}