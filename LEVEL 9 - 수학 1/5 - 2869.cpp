#include <iostream>

using namespace std;

int main()
{
    int crawlSpeed, fallSpeed, meter;
    cin >> crawlSpeed >> fallSpeed >> meter;

    int days = 1;
    if (crawlSpeed != meter)
    {
        int metersRemaining = meter - crawlSpeed;
        int speedDifference = crawlSpeed - fallSpeed;
        
        days += metersRemaining / speedDifference;
        
        if (metersRemaining % speedDifference != 0)
        {
            days++;
        }
    }
    
    cout << days;
	
    return 0;
}