#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int ALPHABET_COUNT = 26;
      
    int alphabets[ALPHABET_COUNT];
    memset(alphabets, -1, sizeof(alphabets));

    string word;
    cin >> word;

    int characterIndex = 0;
    for (char& character : word)
    {
        int alphabetIndex = (int)character % 48 - 1;
        if (alphabets[alphabetIndex] == -1)
        {
            alphabets[alphabetIndex] = characterIndex;
        }
        
        characterIndex++;
    }
    
    for (int alphabetIndex = 0; alphabetIndex < ALPHABET_COUNT; alphabetIndex++)
    {
        cout << alphabets[alphabetIndex] << " ";
    }

    return 0;
}