//Да се напише програма, която по дадено естествено число n (n ≥ 1) намира стойността на ф-цията
//а) (2n)!!
//b) (2n - 1)!!

#include <iostream>

void evenFabs (int n)
{
    int production = 1;
    for (int i = 1; i <= n; i++)
        production *= 2 * i;

    std::cout << "[ (2n)!! ] = " << production << '\n';
}

void oddFabs(int n)
{
    int production = 1;
    for (int i = 1; i <= n; i++)
        production *= ((2 * i) - 1);

    std::cout << "[ (2n - 1)!! ] = " << production << '\n';
}

int main ()
{
    std::cout << '\n';
    std::cout << "-------------------------\n";
    int n = 0;

    std::cout << "[ insert a value for n ]\nn: ";
    do {
        std::cin >> n;
    } while (n < 0);

    evenFabs(n);
    oddFabs(n);
}
//✅