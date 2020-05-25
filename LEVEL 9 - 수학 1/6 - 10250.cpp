#include <iostream>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
	
    int height, width, guest;
    for (int testCase = 0; testCase < testCases; testCase++)
    {
        cin >> height >> width >> guest;
        
        int floor = height;
        if (guest % height != 0)
        {
            floor = guest % height;
        }
        floor *= 100;
        
        int room = guest / height;
        if (guest % height != 0)
        {
            room++;
        }
        
        cout << floor + room << "\n";
    }
	
    return 0;
}