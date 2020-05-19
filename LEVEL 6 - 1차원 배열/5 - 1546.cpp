#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int scoreCount;
    std::cin >> scoreCount;
    
    int value;
    int maxValue = 0, sum = 0;
    for (int index = 0; index < scoreCount; index++)
    {
        std::cin >> value;
        
        if (value > maxValue)
        {
            maxValue = value;
        }

        sum += value;
    }

    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << (double)sum / scoreCount / maxValue * 100 << "\n";

    return 0;
}