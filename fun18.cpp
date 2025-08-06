// Enter an array nd an integer in the main pass it to a function which will return the minimum number in the first n elements of given array
#include <iostream>
using namespace std;
int arr[5];
int min(int);
int n = 0;
int main()
{
    for (int c = 0; c < 5; c++)
    {
        cout << "Enter the " << c + 1 << " element of array: " << endl;
        cin >> arr[c];
    }
    cout << "Ok the array of five elements is set now enter the limit till u want to check: " << endl;
    cin >> n;
    cout << "Minimum element in the first " << n << " elements of given array is = " << min(n) << endl;

    return 0;
}

int min(int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < max)
        {
            max = arr[i];
        }
    }
    return max;
}