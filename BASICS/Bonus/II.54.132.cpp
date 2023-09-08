//Да се напише програма, която извежда всички положителни числа, ненадминаващи дадено някакво число, които при преместването на първата им цифра най-отзад, се усвеличават к пъти
//(к е дадено)
#include <iostream>
#include <cmath>

int countOfDigits(int x)
{
    int counter = 0;
    while (x != 0)
    {
        x /= 10;
        counter++;
    }

    return counter;
}

int reverse(int x)
{
    int k = pow(10, countOfDigits(x) - 1);
    int front = (x % k) * 10;
    int back = x / (k);
    
    return front + back;
}

void print(int n, int k)
{
    for (int i = 10; i <= n; i++)
    {
        if ((reverse(i) % i == 0) && (reverse(i) / i == k))
            std::cout << "[ for " << i << ": " << reverse(i) << " is true --> " << i << " * " << k << " ]\n";
    }
}


int main()
{ 
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    int n, k;
    do {
        std::cout << "[ insert a value for n ]\n> n: ";
        std::cin >> n;
        std::cout << "[ insert a value for k ]\n> k: ";
        std::cin >> k;
    } while (n < 0 || k < 0);

    print(n, k);
}
//✅