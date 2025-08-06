// Input a number in main function which is passed to the function factorial which will output the factorial of the given number
#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
    int num = 0;
    cout << "Enter the number you want factorial for " << endl;
    cin >> num;
    factorial(num);

    return 0;
}


int factorial(int num)
{
    int sum = 1;
    if (num == 0 || num == 1)
    {
        cout << num << "! = " << 1 << endl;
    }
    else
    {

        for (int i = num; i >= 1; i--)
        {
            sum *= i;
        }
        cout << num << "! = " << sum << endl;
    }

    return 0;
}



