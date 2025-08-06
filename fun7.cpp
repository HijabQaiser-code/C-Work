// Input a number in main function pass it to a prime named function which will output if its prime or composite
#include <iostream>
using namespace std;

int Prime(int);
int num = 0;
int main()
{

    cout << "Enter the number you want to check" << endl;
    cin >> num;
    Prime(num);

    return 0;
}

int Prime(int)
{
    bool Isprime = false;
    if (num == 0 || num == 1)
    {
        cout << "Neither prime nor composite" << endl;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                Isprime = true;
                cout << "composite number" << endl;
                break;
            }
        }
        if (Isprime != true)
        {
            cout << "prime number" << endl;
        }
    }
    return 0;
}