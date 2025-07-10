#include <iostream>
using namespace std;

int main()
{

    // Setting variable nd array
    int length = 0;
     cout << "Enter the length of string" << endl;
    cin >> length;

    int count = 0;
    string string[length];


    // Process
    for (count = 0; count < length; count++)
    {
        cout << "Enter ";
        cout << count;
        cout << " letter" << endl;
        cin >> string[count];
    }
    for (count = length-1; count >= 0; count--)
    {
        cout << string[count];
    }

    return 0;
}