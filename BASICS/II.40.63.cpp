//Да се напише програма, която намира сума на всяко трето цяло число, започвайки от две и ненадминавайки 100 (2 + 5 + 8 + ...) 
#include <iostream>

void calculation (int n)
{
    int sum = 0;
    for (int i = n; i <= 100; i += 3)
    {
        sum += i;
    }

    std::cout << "[ sum of every 3 numbers, starting from " << n << " ] = " << sum << '\n';
}

int main ()
{
    std::cout << '\n';
    std::cout << "------------------------\n";

    int n = 0;
    std::cout << "[ insert value for n ]\n> n: ";
    do {
        std::cin >> n;
    } while (n < 2);

    calculation(n);
}
//✅