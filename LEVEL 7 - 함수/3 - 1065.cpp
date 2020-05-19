#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

// Breaks number into digits
vector<int> getDigits(int number, int length)
{
    vector<int> digits;
    
    for (int index = length - 1; index >= 0; index--)
    {
        digits.push_back(number % (int)pow(10, index + 1) / pow(10, index));
    }
    
    return digits;
}

// Checks if number is a Han number
bool isHanNumber(vector<int> digits)
{
    int size = digits.size();
    int difference = digits[1] - digits[0];
    
    // Compare difference throughout the other digits
    for (int index = 2; index < size; index++)
    {
        if (digits[index] - digits[index - 1] != difference)
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    int value;
    cin >> value;
    
    // Numbers up to 99 are considered Han numbers as there is no progression/sequence
    if (value < 100)
    {
        cout << value;
        return 0;
    }
    
    int count = 99;
    vector<int> digits;
    for (int number = 100; number <= value; number++)
    {
        digits = getDigits(number, to_string(number).length());
        if (isHanNumber(digits))
        {
            count++;
        }
    }
    
    cout << count;
	
    return 0;
}