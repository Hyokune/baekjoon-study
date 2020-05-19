#include <iostream>
#include <string>

using namespace std;

int main()
{
	  std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    
    int count = 0;
    string word;
    while (cin >> word)
    {
        count++;
    }
    
    cout << count;
	
    return 0;
}