#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    
    int maxCount;
    cin >> maxCount;

    int multiplicant;
    string word;
    for (int index = 0; index < maxCount; index++)
    {
        cin >> multiplicant >> word;
        
        for (char& character : word)
        {
            cout << string(multiplicant, character);
        }
        
        cout << "\n";
    }
	
    return 0;
}