#include <iostream>
#include <vector>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
	
    int firstNumber, secondNumber;
    std::vector<int> acceptedNumbers;

    while (std::cin >> firstNumber >> secondNumber)
    {
        acceptedNumbers.push_back(firstNumber + secondNumber);
    }
    
    for (int number : acceptedNumbers)
    {
        std::cout << number << "\n";
    }
	
    return 0;
}