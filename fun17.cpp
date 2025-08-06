// Enters anumber in main pass it to a function which will calculate its sum in series for example 1+1/1!+1/2!+1/3!.... and return the answer
#include <iostream>
using namespace std;

float limit = 0;
float c = 0;
float fact = 0;
float sum = 1;
float answer = 0;

double factorial(int n);
double series(int limit);
int main()
{
    cout << "Enter the maximum limit: " << endl;
    cin >> limit;
    answer = series(limit);
    cout << "Sum of series: " << answer << endl;

    return 0;
}

double series(int limit)
{
    double sum = 1.0;
    for (int i = 1; i <= limit; ++i)
        sum += 1.0 / factorial(i);
    return sum;
}

double factorial(int n)
{
    double fact = 1.0;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        {

            for (int i = 2; i <= n; ++i)
                fact *= i;
            return fact;
        }
    }
}