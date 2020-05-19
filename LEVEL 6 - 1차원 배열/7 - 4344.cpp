#include <iostream>
#include <vector>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int maxCount;
    std::cin >> maxCount;

    int totalScore = 0;
    int studentCount, studentScore;
    double averageScore;
    std::vector<int> studentScores;
    for (int index = 0; index < maxCount; index++)
    {
        std::cin >> studentCount;
        
        for (int studentIndex = 0; studentIndex < studentCount; studentIndex++)
        {
            std::cin >> studentScore;
            totalScore += studentScore;
            studentScores.push_back(studentScore);
        }
        
        averageScore = (double)totalScore / studentCount;
        int studentsOverAverage = 0;
        
        for (int studentScore : studentScores)
        {
            if ((double)studentScore > averageScore)
            {
                studentsOverAverage++;
            }
        }
        
        std::cout << std::fixed;
        std::cout.precision(3);
        std::cout << ((double)studentsOverAverage / studentCount) * 100 << "%\n";
        
        totalScore = 0;
        studentCount = 0;
        studentScore = 0;
        averageScore = 0;
        studentScores.clear();
      }

    return 0;
}