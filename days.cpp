#include <iostream>
using namespace std;

// test data is from 2,7,2008 to 9,7,2025
int main()
{
    // initializing total
    int total = 0;
    // taking inputs
    // taking current month day nd year
    cout << "Enter the current date" << endl;
    int cday;
    int cmonth;
    int cyear;
    cin >> cday >> cmonth >> cyear;

    // taking the month day nd year of the date which days are to be calculated
    cout << "Enter the date from which you want to calculate days!" << endl;
    int day;
    int month;
    int year;
    cin >> day >> month >> year;

    // initializing array
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // calculating days passed in given year variable  (days passed in 2008)
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        days[1] = 29;
    }
    int b = 0;
    int passed = 0;
    for (b = 0; b < month - 1; b++)
    {
        passed = passed + days[b];
    }
    passed = passed + day;

    int start = 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        start = 366;
    }
    else
    {
        start = 365;
    }

    total = total + (start - passed);

    // calculating days from given year +1 to cyear -1  (days passed from 2009 to 2024)
    int c = year + 1;
    for (c = year + 1; c < cyear; c++)
    {
        if ((c % 4 == 0 && c % 100 != 0) || (c % 400 == 0))
        {
            total = total + 366;
        }
        else
        {
            total = total + 365;
        }
    }

    // calculating days passed in given cyear variable (days passed in 2025)
    int a = 0;
    days[1] = 28;
    if ((cyear % 4 == 0 && cyear % 100 != 0) || (cyear % 400 == 0))
    {
        days[1] = 29;
    }

    for (a = 0; a < cmonth - 1; a++)
    {
        total = total + days[a];
    }
    total = total + cday;

    // output the total days
    cout << "number of days up till now = ";
    cout << total;
    return 0;
}
