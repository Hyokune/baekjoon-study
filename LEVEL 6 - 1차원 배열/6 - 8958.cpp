#include <iostream>
#include <string>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int maxCount;
    std::cin >> maxCount;
    
    std::string answers;
    int count = 0, sum = 0;
    for (int index = 0; index < maxCount; index++)
    {
        std::cin >> answers;
        
        for (char answer : answers)
        {
            if (answer == 'O')
            {
                count += 1;
                sum += count;
            }
            else
            {
                count = 0;
            }
        }
        
        std::cout << sum << "\n";
        count = 0;
        sum = 0;
    }

    return 0;
}