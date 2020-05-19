#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    std::vector<int> numbers;
	
    int number;
    for (int index = 0; index < 9; index++)
    {
        std::cin >> number;
        numbers.push_back(number);
    }

    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    std::cout << sortedNumbers[8] << "\n";
    std::cout << std::distance(numbers.begin(), std::find(numbers.begin(), numbers.end(), sortedNumbers[8])) + 1 << "\n";
	
    return 0;
}