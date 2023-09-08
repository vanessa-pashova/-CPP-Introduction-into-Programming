//Дадени са три положителни числа, които потребителят трябва да вкара, като първите две образуват затворен интервал. Да се напише програма, която извежда на екрана
//всички цели числа от този интервал, на които, като се махне к-тата цифра отдясно наляво, намаляват с цяло число пъти.
#include <iostream>
#include <cmath>

int countOfDigits (int x)
{
    int counter = 0;
    while (x != 0)
    {
        x /= 10;
        counter++;
    }

    return counter;
}

void deleteK(int n, int m, int k)
{
    for (int i = n; i <= m; i++)
    {
        int temp = i, powerOf10 = pow(10, k), index = 2;
        int front = (temp / powerOf10) * (powerOf10 / 10);
        int back = temp % (powerOf10 / 10);
        int wholeNumber = front + back;

        while (index < wholeNumber)
        {
            if (temp % wholeNumber == 0)
            {
                std::cout << "[ " << i << " ] --> " << wholeNumber << '\n';
                break;
            }

            else index++;
        }
    }
}

int main()
{ 
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    int n, m, k;
    do {
        std::cout << "[ insert a value for n ]\n> n: ";   
        std::cin >> n;
        std::cout << "[ insert a value for m ]\n> m: ";   
        std::cin >> m;
        std::cout << "[ insert a value for k ]\n> k: ";   
        std::cin >> k;
    } while (n > m && k >= countOfDigits(n) || k >= countOfDigits(m));

    deleteK(n, m, k);
}
//✅