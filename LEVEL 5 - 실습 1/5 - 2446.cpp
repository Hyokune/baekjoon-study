#include <iostream>
#include <string>

int main()
{
    int maxCount;
    std::cin >> maxCount;
    maxCount = maxCount * 2 - 1;
    
    int spaceCount;
    for (int count = maxCount; count > 1; count = count - 2)
    {
        spaceCount = (maxCount - count) / 2;
        std::cout << std::string(spaceCount, ' ') << std::string(count, '*') << "\n";
    }
    
    for (int count = 1; count <= maxCount; count = count + 2)
    {
        spaceCount = (maxCount - count) / 2;
        std::cout << std::string(spaceCount, ' ') << std::string(count, '*') << "\n";
    }

    return 0;
}