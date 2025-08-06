// Enters two numbers in the main nd pass them to a function which will return the HCF of two numbers which will then be shown on screen
#include <iostream>
using namespace std;

int fun(int, int);
int num1 = 0;
int num2 = 0;
int minp = 0;
int cf = 0;
int HCF = 0;
bool found = false;
int main()
{
    cout << "Enter first number: " << endl;
    cin >> num1;
    cout << "Enter second number: " << endl;
    cin >> num2;
    int r = fun(num1, num2);
    if (r > 1)
    {
        cout << "Heighest Comman Devisor: " << HCF << endl;
    }
    else
    {
        cout << "Only Heighest Comman Devisor = 1" << endl;
    }

    return 0;
}
int fun(int, int)
{

    if (num1 < num2)
    {
       minp = num1;
    }
    else
    {
       minp = num2;
    }

    for (int n = 1; n <= minp; n++)
    {
        if (num1 % n == 0 && num2 % n == 0)
        {
            found = true;
            cf = n;
            if (cf > HCF)
            {
                HCF = cf;
            }
        }
    }
    if (found == true)
    {
        return HCF;
    }
    else
    {
        return 0;
    }
}