//Да се напише програма, която намира цялото число, което се полуава от положително цяло число n като се отстрани к-тата му цифра отдясно наляво.
#include <iostream>

int countOfDigits (int x)
{
    int counter = 0;
    while (x != 0)
    {
        x %= 10;
        counter++;
        x /= 10;
    }

    return counter;
}

int newNumber (int n, int k)
{
    int p = 1;
    for (int i = 1; i < k-1; i++)
        p *= 10;

    int num = n/(p * 10) * p + (n % p);
    return num;
}

int main()
{
    std::cout << '\n';
    std::cout << "------------------------\n";

    unsigned int num = 0, k;
    std::cout << "[ insert a value for num ]\n";
    std::cin >> num;
    std::cout << "[ insert a value for k ]\n";
    do {
        std::cin >> k;
    } while (k < 0 || 9 < k);
    

    std::cout << "[ new number is ] -> " << newNumber(num, k) << '\n';
}
//✅