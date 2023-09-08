//Да се напише програма, която извежда разлагането на порсти делители на дадено естествено число
#include <iostream>

bool validationOfNumber (int x)
{
    bool flag = false;

    for (int i = 2; i <= 9; i++)
        if (x % i != 0 && x / x == 1)
            return true;

        return flag;
}

void devision(int n)
{
    int i = 2;
    while (n > 1)
    {
        if ((validationOfNumber(i) && (n % i == 0)))
        {
            n /= i;
            std::cout << i << "  ";
        }

        else
            i++;
    }
}

int main ()
{
    std::cout << '\n';
    std::cout << "------------------------------\n";

    int n = 0;
    std::cout << "[ insert a value for n ]\n n: ";
    std::cin >> n;

    devision(n);
}
//✅