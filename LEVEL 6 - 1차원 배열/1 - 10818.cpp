#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    
    int count;
    std::cin >> count;

    std::vector<int> numbers;
	
    int number;
    for (int index = 0; index < count; index++)
    {
        std::cin >> number;
        numbers.push_back(number);
    }

    std::sort(numbers.begin(), numbers.end());
    std::cout << numbers[0] << " " << numbers [count - 1] << "\n";
	
    return 0;
}