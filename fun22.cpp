// Enters a number in the main pass it to a function which will store it table till 10 in an array nd pass it to another function which will output the array one by one
#include <iostream>
using namespace std;

int n = 0;
void table(int);
void fun();
int arr[10];
int main()
{
    cout << "Enter a number you want table for: " << endl;
    cin >> n;
    cout << "Multiples of " << n << " uptill 10= " << endl;
    table(n);
    fun();

    return 0;
}

void table(int)
{
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }
}
void fun()
{
    for (int c = 0; c < 10; c++)
    {
        cout << arr[c] << endl;
    }
}