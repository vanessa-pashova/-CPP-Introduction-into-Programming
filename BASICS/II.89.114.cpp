//Дадени са неотрицателните числа х и у. Да се напише програма, която прави затворен интервал от тях и извежда всички числа, които съдържат 5 в себе си.
#include <iostream>

void containing5Numbers(int n, int m)
{
    for (int i = n; i <= m; i++)
    {
        int temp = i;
        while (temp != 0)
        {
            int check = temp % 10;
            if (check == 5)
            {
                std::cout << i << "  ";
                break;
            }

            else temp /= 10;
        }
    }
}

int main()
{ 
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    int x, y;
    std::cout << "[ insert a value for x ]\n> x: ";   
    std::cin >> x;
    std::cout << "[ insert a value for y ]\n> y: ";   
    std::cin >> y;

    containing5Numbers(x, y);
}
//✅