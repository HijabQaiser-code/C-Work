//  Input two numbers in main function nd pass them to max function which will then output the maxmimum number
#include <iostream>
using namespace std;

int max(int num1, int num2);
int main()
{
    int num1, num2 = 0;
    cout << "Enter first number " << endl;
    cin >> num1;
     cout << "Enter second number " << endl;
     cin >> num2;
    max(num1, num2);
    return 0;
}

int max(int num1, int num2)
{
    if (num1 > num2)
    {
        cout << "greater one is "  << num1 << endl;
        return 0;
       
        
    }
    else
    {
        cout << "greater one is " << num2 << endl;
         return 0;
    }
}