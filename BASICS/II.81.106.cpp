//Едно положително число е съвършено, ако е равно на сумата от своите делители (без самото число). Например 6 е съвършено, защото: 6 = 1 + 2 + 3. Да се намерят всички 
//съвършени числа, ненадминаващи дадено число
#include <iostream>

void remarkable(unsigned int n)
{
    for (int i = 1; i <= n; i++)
    {
        int sum = 0, temp = i, j = 1;
        while (j < temp)
        {
            if (temp % j == 0)
                sum += j;

            j++;

        }
        
        if (sum == i)
            std::cout << "[ " << i << " is remarkable number ]\n";
    }
}

int main()
{ 
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    unsigned int limit = 0;
    std::cout << "[ set a limit ]\n> limit: ";
    std::cin >> limit;

    remarkable(limit);
}
//✅
