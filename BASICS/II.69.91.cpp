//Да се напише програма, която да извежда неотрицателно цяло число в двоичен вид, започвайки от младшия бит.
#include <iostream>

int converting (unsigned int n)
{
    int x = 0;

    while (n != 0)
    {
        x *= 10;
        x += n % 2;
        n /= 2;
    }

    return x;
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

    std::cout << "[ your converted number is ] -> " << x << '\n';
}

int main ()
{
    std::cout << '\n';
    std::cout << "----------------------\n";

    unsigned int num = 0;
    std::cout << "[ insert a value for num ]\n> num: ";
    std::cin >> num;

    reversed(converting(num));
}
//✅