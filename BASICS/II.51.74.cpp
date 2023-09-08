//Нека х и у (y ≥ 0) са цели числа. На колко е равно х^у (без да се използва готова ф-ция)
#include <iostream>

// bool evenNum (int x)
// {
//     if (x % 2 == 0)
//         return true;

//     return false;
// }

int main ()
{
    std::cout << '\n';
    std::cout << "-----------------------\n";

    int x, y;
    do {
        std::cout << "> x: ";
        std::cin >> x;
        std::cout << "> y: ";
        std::cin >> y;
    } while (y < 0);

    std::cout << '\n';

    if (y > 0) 
    {
        int j = x;
        for (int i = 1; i < y; i++) 
        {
            x *= j;
            std::cout << "x = " << x << '\n';
        }
    }

    if (y == 0)
        std::cout << "x = " << x << '\n';
}
//✅