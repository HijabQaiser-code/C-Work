// Enters two numbers in main and pass them to a function which will tell if second number is multiple of first one
#include <iostream>
using namespace std;
int multiple(int, int);
int a = 0;
int b = 0;
int main()
{

    cout << "Enter a number : " << endl;
    cin >> a;
    
    cout << "Enter another number : " << endl;
    cin >> b;
    int r = multiple(a, b);
    if (r ==1)
    {
        cout << a << " is a multiple of " << b << endl;
    }

    else
    {
        cout << "No they are not multiples of eachother " << endl;
    }

return 0;
}
int multiple(int, int)
{
    if (a % b == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}