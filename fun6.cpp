// Input a number in main which is passed to a function which will output weather it is prime or composite also if its even or odd
#include <iostream>
using namespace std;

int numcheck(int);
int num = 0;
int main()
{
    cout << "Enter the number you want to check" << endl;
    cin >> num;
    numcheck(num);

    return 0;
}

int numcheck(int)
{
    bool Isprime = false;
    //  Even or Odd
    // If it zero or one
    if (num == 0 || num == 1)
    {
        cout << "Neither even nor odd not prime nor composite" << endl;
    }
    // Checking if its prime or not
    else
    {
        if (num % 2 == 0)
        {
            int even = num;
            cout << even << " is an even ";
        }
        else
        {
            int odd = num;
            cout << odd << " is an odd ";
        }
    }
    //  Prime or composite
    // Checking if its prime or composite

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            Isprime = true;
             cout << " and composite number";
            break;
        }
    }
    if (Isprime != true)
    {
        cout << " and prime number";
    }

    return 0;
}
