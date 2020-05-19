#include <iostream>

using namespace std;

int getTimeForCode(char character)
{
    if (character - 'Z' > 0) return 11;
    else if (character - 'W' >= 0) return 10;
    else if (character - 'T' >= 0) return 9;
    else if (character - 'P' >= 0) return 8;
    else if (character - 'M' >= 0) return 7;
    else if (character - 'J' >= 0) return 6;
    else if (character - 'G' >= 0) return 5;
    else if (character - 'D' >= 0) return 4;
    else if (character - 'A' >= 0) return 3;
    else return 2;
}

int main()
{
    string code;
    cin >> code;

    int timeTaken = 0;
    for (char& character : code)
    {
        timeTaken += getTimeForCode(character);
    }

    cout << timeTaken;
	
    return 0;
}