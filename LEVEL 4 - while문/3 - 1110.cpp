#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
	
    int returnValue;
    std::cin >> returnValue;

    int calculatedValue, firstNumber, secondNumber;
    int count = 1;
    
    if (returnValue < 10)
    {
        firstNumber = 0;
    }
    else
    {
        firstNumber = returnValue / 10 % 10;
    }
    
    secondNumber = returnValue % 10;
    calculatedValue = secondNumber * 10 + (firstNumber + secondNumber) % 10;
    
    while (calculatedValue != returnValue)
    {
        count++;
        calculatedValue = (calculatedValue % 10) * 10 + ((secondNumber + (calculatedValue % 10)) % 10);
        secondNumber = calculatedValue / 10 % 10;
    }

    std::cout << count;

    return 0;
}