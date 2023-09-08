//Да се напише програма, която извежда на екрана представянето на дадено положително десетично число в троична бройна система
#include <iostream>

int converting (unsigned int x)
{
    int num = 0;
    while (x != 0)
    {
        num *= 10;
        num += x % 3;
        x /= 3;
    }

    return num;
}

void reversed (int n)
{
    int x = 0;
    while (n != 0)
    {
        x *= 10;
        x += n % 10;
        n /= 10;
    }

    std::cout << "[ your number after converting is ] -> " << x << '\n';
}

int main ()
{
    std::cout << '\n';
    std::cout << "---------------------\n";

    unsigned int num = 0;
    std::cout << "[ insert a value for num ]\n> num: ";
    std::cin >> num;

    reversed(converting(num));
}
//✅