#include <iostream>

int main()
{
    int number;
    std::cin >> number;

	int sum = 0;
	for (int count = 1; count <= number; count++)
	{
		sum += count;
	}
	
	std::cout << sum << std::endl;

    return 0;
}