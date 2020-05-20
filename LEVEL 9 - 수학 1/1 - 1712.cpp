#include <iostream>

using namespace std;

int main()
{
    int initialPrice, individualPrice, sellingPrice;
    cin >> initialPrice >> individualPrice >> sellingPrice;
    
    if (sellingPrice <= individualPrice)
    {
        cout << "-1";
        return 0;
    }
    
    cout << initialPrice / (sellingPrice - individualPrice) + 1;
	
    return 0;
}