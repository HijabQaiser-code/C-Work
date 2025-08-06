// Input length of a square in main and pass it to two different functions which will calculate its area and parimeter
#include <iostream>
using namespace std;

int area(int);
int perimeter(int);
int length = 0;
int main()
{
    cout << "Enter the length of a square" << endl;
    cin >> length;
    int a = area(length);
    int p = perimeter(length);
    cout << "Area = " << a << "  Perimeter = " << p << endl;

    return 0;
}

int area(int)
{
    int Area = length * length;
    return Area;
}
int perimeter(int)
{
    int Perimeter = length * 4;
    return Perimeter;
}