// Main calls a function which uses a static variable initialized to n. Each time function is called value of static variable is incremented by 1 and is returned nd displayed on screen.
// in this way the program displays the counting on the screen in between the given limits
#include <iostream>
using namespace std;
int fun();
int limit = 0;

int main()
{
    cout << "Enter the upper limit" << endl;
    cin >> limit;
    for (int c = 0; c <= limit; c++){
        cout << fun() <<endl;

    }


    return 0;
}
int fun()
{
    static int lowr = 1;
    return lowr++;
}
