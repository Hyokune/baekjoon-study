#include <iostream>

int main()
{
    int const size = 10000;
    int numbers[size + 1] = { 0 };
    int number;
    
    for (int index = 1; index <= size; index++)
    {
        number = index + index / 1000 + (index % 1000) / 100 + (index % 100) / 10 +
        index % 10;
      
        if (number <= size)
        {
            numbers[number]++;
        }
    }
    
    for (int index = 1; index <= size; index++)
    {
        if (numbers[index] == 0)
        {
            std::cout << index << "\n";
        }
    }

    return 0;
}