//  Enter a character nd a number in main pass it to a function which will return the n number of columns nd rows of the given character
#include <iostream>
using namespace std;

char c;
int column = 0;
int row = 0;
int algo(int, int, char);

int main()
{

    cout << "Enter the number of columns " << endl;
    cin >> column;
    cout << "Enter the number of rows" <<endl;
    cin >> row;
    cout << "Enter the character" << endl;
    cin >> c;
    algo(column, row, c);
   

    return 0;
}
int algo(int, int, char)
{
    for (int a = 0; a < row; a++)
    {
        cout << endl;
        for (int i = 0; i < column; i++)
        {

            cout << c;
        }
    }
    return 0;
}