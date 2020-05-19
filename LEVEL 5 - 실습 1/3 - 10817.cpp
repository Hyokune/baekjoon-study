#include <iostream>
#include <algorithm>
#include <functional>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
	
	  const int size = 3;
    int numbers[size];
	
    int number;
    for (int index = 0; index < size; index++)
    {
        std::cin >> number;
        numbers[index] = number;
    }

    std::sort(numbers, numbers + size);
	  std::cout << numbers[1];
	
    return 0;
}