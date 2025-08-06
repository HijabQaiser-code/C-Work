// Enters a number in main pass it to a function which will store it table upto 10 nd than pass this arry to another function which will tell how many even nd how many odd numbers are stored in it
#include <iostream>
using namespace std;
int n = 0;
void eventable(int);
void func(int arr[], int v);
int arr[10];
int e = 0;
int main()
{
    cout << "Enter a number you want table for: " << endl;
    cin >> n;
    cout << "Multiples of " << n << " uptill 10 = " << endl;
    eventable(n);
   func(arr, 10);

    return 0;
}
void eventable(int)
{
    for (int c = 0; c < 10; c++)
    {
        arr[c] = n * (c + 1);
        if (arr[c] % 2 == 0)
        {
            e = e + 1;
        }
    }
}
void func(int arr[], int v) 
{
    for (int c = 0; c < 10; c++)
    {
        cout << arr[c] << endl;
    }
    cout << "Their are total " << e << " even numbers in the table of " << n << endl;
}
