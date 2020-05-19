#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    
    int maxCount;
    string value;
    cin >> maxCount >> value;
    
    int sum = 0;
    for (char& character : value)
    {
        sum += (int)character % 48;
    }
    
    cout << sum;
	
    return 0;
}