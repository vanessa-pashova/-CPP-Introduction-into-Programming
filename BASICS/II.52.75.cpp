//да се изведе на екрана логаритъм с основа 2 от Х
#include <iostream>

int main ()
{
    std::cout << '\n';
    std::cout << "-----------------------\n";

    int x;
    std::cout << "[ insert a value for x ]\n> x: ";
    do {
        std::cin >> x;
    } while (x == 0);

    int i = 2;
    while (x / i)
    {
        if (x / i == i)
        {
            std::cout << "log2(x) = " << i << '\n';
            break; 
        }

        else
            i++;
    }
}
//✅