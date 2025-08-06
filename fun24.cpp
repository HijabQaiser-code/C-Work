// Enter a number in the main function which is passed to a function which will store its table uptill 10 in one array than this array is passed to another function which will store its square for all multiples in another array.
// Now these two arrays will be passed to another function which will output it.
#include <iostream>
using namespace std;
int num = 0;
void table(int);
void square(void);
int fun(void);
int arrr[10];
int arr[10];
int main()
{
    cout << "Enter the number" << endl;
    cin >> num;
    table(num);
    cout << "Table of the given number uptill 10: " << endl;
    square();
    fun();

    return 0;
}
//  function table() will store its table uptill 10 in one array.
void table(int)
{
    for (int i = 0; i < 10; i++)
    {
        arr[i] = num * (i + 1);
    }
}
// function square() will store its square for all multiples in another array.
void square(void)
{
    for (int i = 0; i < 10; i++)
    {
        arrr[i] = arr[i] * arr[i];
    }
}
// Now these two arrays will be passed to another function fun() which will output it.
int fun(void)
{
    for (int c = 0; c < 10; c++)
    {
        cout << arr[c] << endl;
    }
    cout << "Square of the table of given number uptill 10: " << endl;
    for (int c = 0; c < 10; c++)
    {
        cout << arrr[c] << endl;
    }
    return 0;
}
