#include <iostream>
using namespace std;

int main()
{
    // Setting variables and taking input
    int limit1 = 0;
    int limit2 = 0;

    cout << "Enter the lower limit: ";
    cin >> limit1;

    cout << "Enter the upper limit: ";
    cin >> limit2;

    int prime[limit2 + 1];
    int composite[limit2 + 1];
    int P = 0;
    int C = 0;
    int i = 0;

    // Prime check process
    for (int count = limit1; count <= limit2; count++)
    {
        if (count > 1)
        {
            for (i = 2; i <= count / 2; i++)
            {
                if (count % i == 0)
                {
                    composite[C++] = count;
                    break;
                }
            }

            if (i > count / 2)
            {
                prime[P++] = count;
            }
        }
        else
        {
            composite[C++] = count; // 0 and 1 will be stored as composite
        }
    }

    // Output
    cout << "Prime numbers entered = " << endl;
    for (int i = 0; i < P; i++)
    {
        cout << prime[i] << " ";
    }
    cout << endl;

    cout << "Total prime numbers entered = " << P << endl;

    cout << "Composite numbers entered = " << endl;
    for (int i = 0; i < C; i++)
    {
        cout << composite[i] << " ";
    }
    cout << endl;

    cout << "Total composite numbers entered = " << C << endl;

    return 0;
}
