//Да се намери най-малката и най-голямата цифра на едно число
#include <iostream>

int minimal (unsigned int x)
{
    int min = x % 10;
    x /= 10;

    while (x != 0)
    {
        if (min < x % 10)
            x /= 10;

        else
        {
            min = x % 10;
            x /= 10;
        }
    }

    return min;
}

int maximal (unsigned int x)
{
    int max = x % 10;
    x /= 10;

    while (x != 0)
    {
        if (max > x % 10)
            x /= 10;

        else 
        {
            max = x % 10;
            x /= 10;
        }
    }

    return max;
}

int main ()
{
    std::cout << '\n';
    std::cout << "--------------------------------\n";

    unsigned int x = 0;
    std::cout << "[ insert a value for x ]\n> x: ";
    std::cin >> x;

    std::cout << "[ minimal digit ] -> " << minimal(x) << '\n';
    std::cout << "[ maximal digit ] -> " << maximal(x) << '\n';
}
//✅