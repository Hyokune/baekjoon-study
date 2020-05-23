#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int row = 1;
    while (true)
    {
        if (row >= number)
        {
            break;
        }
        number -= row;
        row++;
    }

    if (row % 2 == 0)
    {
        cout << number << "/" << row - number + 1;
    }
    else
    {
        cout << row - number + 1 << "/" << number;
    } 
    
    return 0;
}