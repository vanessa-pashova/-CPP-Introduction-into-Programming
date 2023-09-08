//Да се напише програма, която проверява дали дадено число е на втора степен
#include <iostream>

bool power2(int x)
{
    bool flag = false;
    int i = 2;
    while (i < x)
    {
        if ((x / i == i) && (x % i == 0))
        {
            flag = true;
            break;
        }

        else i++;
    }

    return flag;
}

int main ()
{
    std::cout << '\n';
    std::cout << "--------------------------------\n";

    int n = 0;
    std::cout << "[ insert a value for n ]\n> ";
    do {
        std::cin >> n;
    } while (n < 1);

    if (power2(n))
        std::cout << "[ true ]\n";

    else std::cout << "[ not found ]\n";
}
//✅