//Да се провери дали сумата от цифрите на дадено положително число е кратна на 3
#include <iostream>

int sumOfDigits (unsigned int &n)
{
    int sum = 0, digit = 0;
    while (n != 0)
    {
        digit = n / 10;
        sum += digit;
    }

    return sum;
}

bool devisionOf3(unsigned int x)
{
    bool flag = false;
    if (x % 3 == 0)
        return true;

    return flag;
}

int main ()
{
    std::cout << '\n';
    std::cout << "--------------------------\n";

    unsigned int n = 0;
    std::cout << "[ insert a value for n ]\n> n: ";
    std::cin >> n;

    if (devisionOf3(n))
        std::cout << "[ true ]\n";

    else std::cout << "[ false ]\n";
}
//✅