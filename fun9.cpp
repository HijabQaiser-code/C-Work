// Enters two numbers nd one operator in the main pass it to a function which will evaluate it on the basis of operator using switch or case of statement
#include <iostream>
using namespace std;

int opr(int, int);
int num1 = 0;
int num2 = 0;
char op;
int main()
{

    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Which operator to apply" << endl;
    cin >> op;
    cout << "Enter the second number" << endl;
    cin >> num2;
    int result = opr(num1, num2);
    cout << "Your result = " << result << endl;

    return 0;
}

int opr(int, int)
{
    switch (op)
    {
    case '+':
        return num1 + num2;

        break;
    case '-':
        return num1 - num2;

        break;
    case '*':
        return num1 * num2;

        break;
    case '/':
        return num1 / num2;
        break;

    default:
        cout << "Invalid operator" << endl;
        return 0;
    }
}