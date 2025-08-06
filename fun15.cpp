// Enter two integers in main which will pass one to a function of square and one to function of cube these functions will return the square and cube of given number now main will pass it to another function which will add both and now main will output it
#include <iostream>
using namespace std;
int a = 0;
int b = 0;
int c = 0;
int cube(int);
int square(int);
int main()
{
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;
    c = (cube(a) + square(b));
    cout << "Result = " << c << endl;

    return 0;
}
int cube(int)
{
    return a * a * a;
}
int square(int)
{
    return b * b;
}
