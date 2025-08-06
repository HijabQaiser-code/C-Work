// Enter base and height in the main function and pass them to another function which will output its area for the given triangle
#include <iostream>
using namespace std;
int base = 0;
int height = 0;
int area = 0;
int a(int, int);
int main()
{
    cout << "Enter base: " << endl;
    cin >> base;
    cout << "Enter height: " << endl;
    cin >> height;
    area = a(base, height);
    cout << "Area of triangle: " << area << endl;

    return 0;
}
int a(int, int)
{
    int ar = (0.5 * base * height);
    return ar;
}
