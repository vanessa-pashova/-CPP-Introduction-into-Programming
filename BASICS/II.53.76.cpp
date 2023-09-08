//да се напише програма, която въвежда цели числа от клавиатурата до въвеждането на числото нула и намира сумата им
#include <iostream>

int main ()
{
    std::cout << '\n';
    std::cout << "-----------------------------\n";

    int x = 0, sum = 0;
    do {
        std::cout << "[ insert a number ]\n> ";
        std::cin >> x;
        sum += x;
    } while (x != 0);

    std::cout << "[ sum ] = " << sum << '\n';
}
//✅