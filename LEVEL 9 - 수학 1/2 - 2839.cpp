#include <iostream>

using namespace std;

int main()
{
    int totalBagCount = 0, totalWeight;
    cin >> totalWeight;
    
    while (true)
    {
        if (totalWeight % 5 == 0)
        {
            totalBagCount += totalWeight / 5;
            break;
        }
        
        totalBagCount++;
        totalWeight -= 3;
        
        if (totalWeight < 0)
        {
            totalBagCount = -1;
            break;
        }
    }
    
    cout << totalBagCount;
	
    return 0;
}