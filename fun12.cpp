// Input marks of a student in main function nd pass it to a function which will output grade on the basis of marks nd a criteria.
#include <iostream>
using namespace std;
int mark = 0;
string marks(int);

int main()
{
    cout << "Enter your marks: " << endl;
    cin >> mark;
    string result = marks(mark);
    cout << result <<endl;

    return 0;
}
string marks(int)
{

    if (mark > 80)
    {
        return "A";
    }
    else if (mark > 60 && mark < 80)
    {
        return "B";
    }
    else if (mark > 40 && mark < 60)
    {
        return "C";
    }
    else
    {
        return "U";
    }
}