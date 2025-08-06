// Enter a number in main pass it to another function which will multiply it by 2 nd retur
#include <iostream>
using namespace std;
int num = 0;
int fun(int);
int main()
{
    cout << "Enter an integer: " << endl;
    cin >> num;
    cout << num << " x " << " 2 " << " =  " << fun(num) << endl;

    return 0;
}
int fun(int)
{
    int answer = num * 2;
    return answer;
}