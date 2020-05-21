#include <iostream>

using namespace std;

int main (void)
{
    int number;
    cin >> number;
    int bottomCap = 1, highCap = 1, count = 0;
    
    while (true)
    {
        if (number >= bottomCap && number <= highCap)
        {
            cout << count + 1;
            break;
        }
        else
        {
            bottomCap = highCap + 1;
            highCap += 6 * (count + 1);
        }
        
        count++;
    }
    
    return 0;
}