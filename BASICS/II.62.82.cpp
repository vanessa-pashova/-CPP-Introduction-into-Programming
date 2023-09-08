//Симетрично на дадено число се нарича число със същия знак и същите цифри, но записани в обратен ред. Да се напише програма, която въвежда число и намира и извежда неговото
//симетрично такова
#include <iostream>

void symetricNumber (int x)
{
    int num = 0;
    while (x != 0)
    {
        num *= 10;
        num += x % 10;
        x /= 10;
    }

    if (x < 0)
        num *= -1;

    std::cout << "[ symetric number is ] -> " << num << '\n';
}

int main ()
{
    std::cout << '\n';
    std::cout << "------------------------\n";

    int num = 0;
    std::cout << "[ insert a value for the num ]\n> num: ";
    std::cin >> num;

    symetricNumber(num);
}
//✅