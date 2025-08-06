// Input two values in main function nd than pass them to another function by reference whoch will swap them up nd output
#include <iostream>
using namespace std;

int a = 0;
int b = 0;
int swap(int &a, int &b);
int main()
{
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Values before swaping: " << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    swap(a, b);
    cout << "Values after swaping: " << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;

    return 0;
}
int swap(int &x, int &y)
{
    int t = 0;
    t = a;
    a = b;
    b = t;
    return 0;
}