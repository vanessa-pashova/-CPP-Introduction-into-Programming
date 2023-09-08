//Да се напише програма, която приема две цели чсисла х и у и проверява дали цифрите на х са подмножество на тези на у
#include <iostream>

void sets(int x, int y)
{
    bool flag = false;
    int tempX = x, tempY = y;
    while (tempX != 0)
    {
        int lastDigit = x % 10;
        while (tempY != 0)
        {
            int digitY = tempY % 10;

            if (tempX != tempY)
                tempY /= 10;

            else 
            {
                flag = true;
                break;
            }
        }

        tempX /= 10;
    }

    if (!flag)
        std::cout << "[ x is not unset of y ]\n";

    else std::cout << "[ x is underset of y ]\n";
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

    sets(x, y);
}
//✅