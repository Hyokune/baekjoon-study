#include <iostream>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    
    int building[16][16];
    for (int index = 0; index < 16; index++)
    {
        building[index][0] = 1;
        building[0][index] = index + 1;
    }
    
    for (int floor = 1; floor < 15; floor++)
    {
        for (int room = 1; room < 15; room++)
        {
            building[floor][room] = building[floor][room - 1] + building[floor - 1][room];
        }
    }
    
    int targetFloor, targetRoom;
    for (int testCase = 0; testCase < testCases; testCase++)
    {
        cin >> targetFloor >> targetRoom;
        
        cout << building[targetFloor][targetRoom - 1] << "\n";
    }
	
    return 0;
}