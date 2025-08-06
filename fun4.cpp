//  Input a number in main nd pass it to a function which will ouput the numbers precessor and successor
#include <iostream>
using namespace std;

int value();
int num = 0;
int main()
{

    cout << "Enter the number ypu want precessor and successor for: " << endl;
    cin >> num;
    value();

    return 0;
}

int value(){
    cout << (num- 1) << " Is the precessor " << "and " << (num +1) << " Is the successor" <<endl;
    return 0;
}