// Input a number in main which is passed to another function of table nd this will output its table to 10
#include <iostream>
using namespace std;

int table();
int num = 0;
int main()
{

    cout << "Enter the number you want table for" << endl;
    cin >> num;
    table();

    return 0;
}
int table()
{
    for (int c = 0; c <= 10; c++)
    {
        cout << num << " * " << c << " = " << (num * c) << endl;
    }
    return 0;
}