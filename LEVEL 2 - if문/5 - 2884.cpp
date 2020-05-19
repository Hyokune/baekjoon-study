#include <iostream>

int main()
{
    int hour, minutes;
    std::cin >> hour >> minutes;

    const int requiredMinutesToBack = 45;
    
    int backedMinutes = minutes - requiredMinutesToBack;
    if (backedMinutes < 0)
    {
        backedMinutes = 60 + backedMinutes;

        if (hour == 0)
        {
            hour = 23;
        }
        else
        {
            hour--;
        }
    }
    
    std::cout << hour << " " << backedMinutes;

    return 0;
}