#include <iostream>
#include <vector>

int main()
{
	  std::cin.tie(NULL);
	  std::ios_base::sync_with_stdio(false);
	
    int firstNumber, secondNumber;
	  std::vector<int> acceptedNumbers;

    std::cin >> firstNumber >> secondNumber;
    while (firstNumber != 0 && secondNumber != 0)
    {
      acceptedNumbers.push_back(firstNumber + secondNumber);
      std::cin >> firstNumber >> secondNumber;
    }
    
    for (int number : acceptedNumbers)
    {
      std::cout << number << "\n";
    }
	
    return 0;
}