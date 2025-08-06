// Enters radius in main pass it to a function which will calculate its area nd return
#include <iostream>
using namespace std;
float r = 0;
float area(float);
float pie = 3.142;
int main()
{
    cout << "Enter the radius of your circle" << endl;
    cin >> r;
    cout << "Area of the circle = " << area(r) << endl;

    return 0;
}
float area(float r)
{
    float a = pie * r * r;
    return a;
}