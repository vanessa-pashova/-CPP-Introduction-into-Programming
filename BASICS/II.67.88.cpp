//Да се напише програма, която изтрива нечетните цифри на дадено неотрицателно число.
#include <iostream>

bool evenDigit (int x) {
    return x % 2 == 0;
}

int countOfDigits(unsigned int n)
{
    int counter = 0;
    while (n != 0)
    {
        n /= 10;
        counter++;
    }

    return counter;
}

void newNumber(unsigned int n)
{
    int num = 0, digitsCount = countOfDigits(n), i = 1;
    for (int j = 1; j < digitsCount; j++)
        i *= 10;

    for (int j = i; j != 0; j /= 10)
    {
        int temp = n;
        temp /= j;

        if (evenDigit(temp))
        {
            num *= 10;
            num += temp;
        }

        n %= j;
    }

    std::cout << "[ new number without odd digits ] -> " << num << '\n';
}

int main ()
{
    std::cout << '\n';
    std::cout << "-------------------------\n";

    unsigned int num = 0;
    std::cout << "[ insert a value for num ]\n> num: ";
    std::cin >> num;

    newNumber(num);
}
//✅