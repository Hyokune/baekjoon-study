#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
	
    int score;
    int totalScore = 0;
    
    for (int count = 0; count < 5; count++)
    {
        std::cin >> score;
        
        if (score < 40)
        {
            totalScore += 40;
        }
        else
        {
            totalScore += score;
        }
    }
    
    std::cout << totalScore / 5;

    return 0;
}