#include <iostream>
#include <string>

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	
    int maxCount;
	std::cin >> maxCount;

	for (int count = 1; count <= maxCount; count++)
	{
		std::cout << std::string(count, '*') << "\n";
	}

    return 0;
}