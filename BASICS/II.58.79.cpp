//Да се напише програма, която определя дали за дадено положително число с четен брой цифри, сумата от първите му n цифри е равна на сумата на последните му 
//n на брой цифри 
#include <iostream>

bool evenCountDigits (unsigned int x)
{
    bool flag = false;
    int i = 0;
    while (x != 0)
    {
        x /= 10;
        i++;
    }

    if (i % 2 == 0)
        return true;

    return flag;
}

unsigned int half (unsigned int x) {
    return evenCountDigits(x) / 2;
}

bool sums (unsigned int x)
{
    bool flag = false;
    int h = half(x), end = evenCountDigits(x), sum1 = 0, sum2 = 0;

    for (int j = end; j >= h; j--)
    {
        sum2 += x % 10;
        x /= 10;
    }

    for (int j = h; j >= -1; j--)
    {
        sum1 += x % 10;
        x /= 10;
    }

    if (sum1 == sum2)
        return true;

    return flag;
}

int main ()
{
    std::cout << '\n';
    std::cout << "-------------------------\n";

    unsigned int n = 0;
    do {
        std::cout << "[ insert a value for n ]\n> n: ";
        std::cin >> n;
    } while(!evenCountDigits(n));

    if (sums(n))
        std::cout << "[ true ]\n";

    else std::cout << "[ false ]\n";
}
//✅