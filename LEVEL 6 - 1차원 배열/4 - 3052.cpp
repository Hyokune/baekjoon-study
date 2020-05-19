#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    std::vector<int> uniqueNumbers;
    
    int value;
    for (int index = 0; index < 10; index++)
    {
        std::cin >> value;
        value = value % 42;
        std::vector<int>::iterator it = 
        std::find(uniqueNumbers.begin(), uniqueNumbers.end(), value);
          
        if (it != uniqueNumbers.end())
        {
            continue;
        }
        
        uniqueNumbers.push_back(value);
    }
    
    std::cout << uniqueNumbers.size() << "\n";
	
    return 0;
}