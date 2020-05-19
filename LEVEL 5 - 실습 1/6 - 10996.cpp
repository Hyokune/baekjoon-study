#include <iostream>

int main()
{
    int maxCount;
    std::cin >> maxCount;
    
    for (int count = 1; count <= (maxCount * 2); count++)
    {
        for (int charCount = 1; charCount <= maxCount; charCount++)
        {
            if (count % 2 == 0)
            {
                if (charCount % 2 != 0)
                {
                    std::cout << ' ';
                }
                else
                {
                    std::cout << '*';
                }
            }
            else
            {
                if (charCount % 2 == 0)
                {
                    std::cout << ' ';
                }
                else
                {
                    std::cout << '*';
                }
            }
        }
      
        std::cout << "\n";
    }

    return 0;
}