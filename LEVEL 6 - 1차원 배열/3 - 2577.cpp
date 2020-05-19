#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    const int size = 10;
    int numberCounter[size] = { 0 };
    
    int value, sum;
    std::cin >> value;
    sum = value;
    for (int index = 0; index < 2; index++)
    {
        std::cin >> value;
        sum = sum * value;
    }

    while (sum > 0)
    {
        numberCounter[sum % 10]++;
        sum = sum / 10;
    }
    
    for (int index = 0; index < size; index++)
    {
        std::cout << numberCounter[index] << "\n";
    }
	
    return 0;
}