#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    
    const int ALPHABET_COUNT = 26;
    int alphabets[ALPHABET_COUNT] = { 0 };
    
    string word;
    cin >> word;

    for (char& character : word)
    {
        alphabets[tolower(character) % 48 - 1]++;
    }

    int mostUsed = 0;
    for (int index = 1; index < ALPHABET_COUNT; index++)
    {
        if (alphabets[index] > 0 && alphabets[index] > alphabets[mostUsed])
        {
            mostUsed = index;
        }
    }
    
    for (int index = 1; index < ALPHABET_COUNT; index++)
    {
        if (index != mostUsed && alphabets[index] > 0 && alphabets[index] == alphabets[mostUsed])
        {
            cout << '?';
            return 0;
        }
    }

    cout << (char)toupper((char)(mostUsed + 48 * 2 + 1));

    return 0;
}