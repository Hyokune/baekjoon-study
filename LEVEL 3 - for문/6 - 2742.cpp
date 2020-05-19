#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	
    int maxCount;
	std::cin >> maxCount;

	for (int count = maxCount; count > 0; count--)
	{
		std::cout << count << "\n";
	}

    return 0;
}