#include <iostream>
using namespace std;

int main()
{

    // Setting variables and arrays
    int arr[5];
    bool sort = false;
    int temp = 0;

    // Taking inputs for sorting nd storing them in an array
    for (int c = 0; c < 5; c++)
    {
        cout << "Enter the " << c + 1 << " integer" << endl;
        cin >> arr[c];
    }

    // Process
    for (int a = 0; a < 5; a++)
    {
        sort = false;
        for (int b = 0; b < 4 - a; b++)
        { // Inner loop gose up to 4 - a to avoid out-of-bounds
            if (arr[b] < arr[b + 1])
            {
                // Swap if the current element is greater than the next
                temp = arr[b];
                arr[b] = arr[b + 1];
                arr[b + 1] = temp;
                sort = true;
            }
        }

        // If no swapping occurred, break out of the loop
        if (!sort)
        {
            break;
        }
    }

    // Output
    cout << "Showing the integers you entered in asscending order " << endl;
    for (int c = 0; c < 5; c++)
    {
        cout << arr[c] << endl;
    }

    return 0;
}
