#include <iostream>

using namespace std;

int main()
{
    char code[100];
    cin >> code;

    int characterCount = 0, index = 0;
    while (code[index] != 0)
    {
        if (code[index] == 'c')
        {
            if (code[index + 1] == '=' ||  code[index + 1] == '-')
            {
                index += 2;
            }
            else
            {
                index++;
            }
        }
        else if (code[index] == 'd')
        {
            if (code[index + 1] == 'z' && code[index + 2] == '=')
            {
                index += 3;
            }
            else if (code[index + 1] == '-')
            {
                index += 2;
            }
            else
            {
                index++;
            }
        }
        else if (code[index] == 'l' || code[index] == 'n')
        {
            if (code[index + 1] == 'j')
            {
                index += 2;
            }
            else
            {
                index++;
            }
        }
        else if (code[index] == 's' || code[index] == 'z')
        {
            if (code[index + 1] == '=')
            {
                index += 2;
            }
            else
            {
                index++;
            }
        }
        else
        {
            index++;
        }
        
        characterCount++;
    }		

    cout << characterCount;
	
    return 0;
}