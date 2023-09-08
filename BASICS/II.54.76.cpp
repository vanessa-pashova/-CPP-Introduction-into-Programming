//Да се напише програма, която намира най-големият общ делител на две цели положителни числа
#include <iostream>

int GCD(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int main() {
    std::cout << '\n';
    std::cout << "------------------------\n";

    int m, n;
    std::cout << "[ insert values for m and n ]\n> m = ";
    std::cin >> m;
    std::cout << "> n = ";
    std::cin >> n;

    std::cout << "[ GCD ] = " << GCD(n, m) << '\n';
}
//работи, но не по моя начин
