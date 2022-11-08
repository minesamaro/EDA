#include <iostream>
#include <math.h>
#include <unordered_map>
#include <iomanip>

using namespace std;

bool isleap(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int numDays(int month, int year)
{
    int numdays;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        numdays = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        numdays = 30;
        break;
    case 2:
        if (isleap(year))
            numdays = 29;
        else
            numdays = 28;
        break;
    default: numdays = 0;
    }

    return numdays;
}

int monthcode(int month, int year)
{
    int c;
    bool l = isleap(year);
    unordered_map<int, int> month_codes;

    if (l) 
    {
        month_codes = {
    { 1, 6 },
    { 2, 2 },
    { 3, 3 },
    { 4, 6 },
    { 5, 1 },
    { 6, 4 },
    { 7, 6 },
    { 8, 2 },
    { 9, 5 },
    { 10, 0},
    { 11, 3},
    { 12, 5 }
};
    }
    else
    {
        month_codes = {
    { 1, 0 },
    { 2, 3 },
    { 3, 3 },
    { 4, 6 },
    { 5, 1 },
    { 6, 4 },
    { 7, 6 },
    { 8, 2 },
    { 9, 5 },
    { 10, 0},
    { 11, 3},
    { 12, 5 }
};
    }

    c = month_codes.at(month);
    return c;
}



int dayofweek(int day, int month, int year)
{
    int a = year % 100;
    int s = year / 100;
    int c = monthcode(month, year);
    int ds = (int(floor(5.0 / 4 * a)) + c + day - 2 * (s % 4) + 7) % 7;
    return ds;
}

string nameofday(int day)
{
    unordered_map<int, string> day_name = 
    {
        {1, "Sunday"},
    { 2, "Monday"},
    { 3, "Tuesday" },
    { 4, "Wednesday" },
    { 5, "Thursday" },
    { 6, "Friday" },
    { 0, "Saturday" } 
    };

    return day_name.at(day);
}

string nameofmonth(int month)
{
    unordered_map<int, string> month_name = 
    {
        {1, "January"},
    { 2, "February"},
    { 3, "March" },
    { 4, "April" },
    { 5, "May" },
    { 6, "June" },
    { 7, "July" },
    { 8, "August"},
    { 9, "September"},
    { 10, "October" },
    { 11, "November" },
    { 12, "December" }
    };

    return month_name.at(month);
}

void makemonthcalendar(int month, int year)
{
    int numdays = numDays(month, year);

    cout << nameofmonth(month) << " \\ " << year << endl << endl;
    cout << "  Sun   Mon   Tue   Wed   Thu   Fri   Sat" << endl;
    
    int dayone = dayofweek(1, month, year);
    if (dayone == 0) dayone = 7;
    for (int j = 1; j< dayone; j++) cout << setw(6) <<' ';

    for (int i = 1; i<= numdays; i++)
    {
        cout << setw(6) <<i;
        if (dayofweek(i, month, year)== 0) cout << endl;
    }
}

void makecalendar(int year)
{
    for (int i = 1; i <= 12; i++)
    {
        makemonthcalendar(i, year);
        cout << endl<< endl;
    }
}


bool testleap()
{
    bool pass = true;

    if ((isleap(2100) == 0) && ((isleap(2000) == 1) && (isleap(1600) == 1) && (isleap(2001) == 0)))
        return true;
    else
        return false;
}

int main()
{
    cout << testleap() << endl;
    cout << numDays(10, 2020) << endl;
    cout << nameofday(dayofweek(18, 10, 2022)) << endl;
    makecalendar(2023);
}

// leap year  ==> ((year %4 == 0 && year % 100 != 0) || year % 400 == 0)
