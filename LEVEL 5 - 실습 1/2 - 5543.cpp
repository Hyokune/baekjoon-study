#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
	
    int price, burgerPrice, drinkPrice;

    std::cin >> burgerPrice;
    for (int count = 0; count < 2; count++)
    {
        std::cin >> price;
        
        if (price < burgerPrice)
        {
            burgerPrice = price;
        }
    }
    
    std::cin >> drinkPrice >> price;

    if (price < drinkPrice)
    {
        drinkPrice = price;
    }
    
    std::cout << burgerPrice + drinkPrice - 50;

    return 0;
}