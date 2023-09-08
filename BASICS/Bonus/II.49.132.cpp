//Да се напише програма, която извежда  простите числа в даден интервал, които не съдържат цифрата 5 и сумата от цифрите им е просто число
#include <iostream>

bool prime (int x)
{
    bool flag = true;
    int index = 2;

    while (index < x)
    {
        if (x % index == 0)
        {
            return false;
            break;
        }

        else index++;
    }

    return flag;
}

bool contains5 (int x)
{
    bool flag = false;
    while (x != 0)
    {
        if (x % 10 == 5)
        {
            return true;
            break;
        }

        x /= 10;
    }

    return flag;
}

int sum(int x)
{
    int sum = 0;
    if (prime(x) && !contains5(x))
    {
        while (x != 0)
        {
            sum += x % 10;
            x /= 10;
        }
    }

    if (prime(sum))
        return sum;

    return 0;
}

void printIfNo5(int m, int n)
{
    for (int i = m; i <= n; i++)
    {
        if (sum(i))
            std::cout << i << "  ";
    }
}

int main()
{ 
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    int m, n;
    do {
        std::cout << "[ insert a value for m ]\n> m: ";
        std::cin >> m;
        std::cout << "[ insert a value for n ]\n> n: ";
        std::cin >>n;
    } while (m > n);

    printIfNo5(m, n);
}   
// ✅