#include <iostream>
using namespace std;

int main()
{

    // Declare an array to store the multiples and initialize variables to track search results and user inputs.
    int arr[10];
    bool found = false;
    int search = 0;
    int num = 0;
    int c = 0;
    int mid = 5;

    // Prompt the user to input a number for which we will calculate the multiples. The multiples will be stored in the array.
    // Tables are already stored in asscending order so array will be sorted.
    cout << "Please enter the number you want to generate multiples for: " << endl;
    cin >> num;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = num * i;
    }

    // Ask the user to input a multiple of the number they want to search for within the array of multiples.
    cout << "Enter a multiple of " << num << " that you want to search for:" << endl;
    cin >> search;

    // Process.

    //  Bwst case.
    if (arr[mid] == search)
    {
        cout << "Yes, " << search << " is a multiple of " << num << " and is located at index " << mid << ".";
    }

    // Second case.
    else if (search > arr[mid])
    {
        for (int a = mid + 1; a < 10; a++)
        {
            if (arr[a] == search)
            {
                found = true;
                cout << "Yes, " << search << " is a multiple of " << num << " and is located at index " << a << ".";
                break;
            }
        }
        if (!found)
        {
            cout << "Sorry, " << search << " is not a multiple of " << num << "." << endl;
        }
    }

    // Third case
    else
    {
        for (int a = mid - 1; a >= 0; a--)
        {
            if (arr[a] == search)
            {
                found = true;
                cout << "Yes, " << search << " is a multiple of " << num << " and is located at index " << a << ".";
                break;
            }
        }
        if (!found)
        {
            cout << "Sorry, " << search << " is not a multiple of " << num << "." << endl;
        }
    }
    return 0;
}
