#include <iostream>
using namespace std;

int main()
{
    // taking input for length
    int length = 0;
    cout << "Enter the number till you want to set the index making sure its less then or equal to 100" << endl;
    cin >> length;

    // declareing
    int num[length];
    int square[length];
    int cube[length];
    int sum[length];
    int c = 0;
    int grandtotal = 0;

    // processing
    for (c = 0; c < length; c++)
    {
        num[c] = c;
        square[c] = c * c;
        cube[c] = c * c * c;
        sum[c] = num[c] + square[c] + cube[c];
        grandtotal = grandtotal + sum[c];
    }

    cout << "Numbers\tSquares\tCubes\tSums" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << num[i] << "\t" << square[i] << "\t" << cube[i] << "\t" << sum[i] << endl;
    }

    cout << "Grand total = " << endl;
    cout << grandtotal;

    return 0;
}