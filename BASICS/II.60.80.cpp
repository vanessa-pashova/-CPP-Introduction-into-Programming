//Да се напише програма, която въвежда цяло неотрицателно число х и цифра у и да открие на коя позиция се намира цифрата у в числото х
#include <iostream>

bool exists (unsigned int x, unsigned int y)
{
    bool flag = false;
    while (x != 0)
    {
        if (y != x % 10)
            x /= 10;

        else return true;
    }

    return flag;
}

int position (unsigned int x, unsigned int y)
{
    int index = 0, copyX = x;
    while (x != 0)
    {
        x /= 10;
        index++;
    }

    while (copyX != 0)
    {
        if (y != copyX % 10)
        {
            copyX /= 10;
            index--;
        }

        else 
        {
            return index;
            break;
        }
    }
    
    return index;
}

int main ()
{
    std::cout << '\n';
    std::cout << "-----------------------\n";

    unsigned int x, y;
    std::cout << "[ insert a value for x ]\n> x: ";
    std::cin >> x;
    std::cout << "[ insert a value for y ]\n> y: ";
    std::cin >> y;

    if(exists(x, y))
        std::cout << "[ digit c takes " << position(x, y) << " position ]\n";

    else std::cout << "[ does not exists in the number ]\n";
}
//✅