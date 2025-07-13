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

    // Prompt the user to input a number for which we will calculate the multiples. The multiples will be stored in the array.
    cout << "Please enter the number you want to generate multiples for: " << endl;
    cin >> num;
    for (long long i = 0; i <= 9; i++)
    {
        arr[i] = num * i;
    }

    // Ask the user to input a multiple of the number they want to search for within the array of multiples.
    cout << "Enter a multiple of " << num << " that you want to search for:" << endl;
    cin >> search;

    // Iterate through the array to find the searched multiple. If found, print the position where it's located. If not found, notify the user.
    for (c = 0; c <= 9; c++)
    {
        if (arr[c] == search)
        {
            found = true;
            cout << "Yes, " << search << " is a multiple of " << num << " and is located at index " << c << ".";
            break;
        }
    }
    // If the search number was not found, notify the user.
    if (!found)
    {
        cout << "Sorry, " << search << " is not a multiple of " << num << "." << endl;
    }

    return 0;
}