#include <iostream>

using namespace std;

int reverseNumber(int number)
{
    int remainder, reversedNumber = 0;
    
    while (number != 0)
    {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    
    return reversedNumber;
}

int main()
{
    int count = 0;
    int scoreA, scoreB, reversedScoreA, reversedScoreB, remainder;
    
    cin >> scoreA >> scoreB;
    
    reversedScoreA = reverseNumber(scoreA);
    reversedScoreB = reverseNumber(scoreB);
      
    if (reversedScoreB > reversedScoreA)
    {
        cout << reversedScoreB;
    }
    else
    {
        cout << reversedScoreA;
    }
	
    return 0;
}