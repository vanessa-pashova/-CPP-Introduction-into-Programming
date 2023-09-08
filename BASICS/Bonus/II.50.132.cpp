//Дадено е цяло число а; да се напише програма, която проверява дали съществуват прости числа p и q такива, че a = p + q;
#include <iostream>

bool prime(int x)
{
    int index = 2;
    while (index < x)
    {
        if (x % index == 0)
        {
            return false;
            break;
        }

        else index++;
    }

    return true;
}

void primeNums (int x)
{
    for (int i = 1; i < x - 1; i++)
    {
        for (int j = 2; j < x; j++)
        {
            if ((x == i + j) && (prime(i) && prime(j)))
                std::cout << "[ " << x << " = " << i << " + " << j << " ]\n";
        }
    }
}

int main()
{ 
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    int a = 0;
    std::cout << "[ insert a value for a ]\n> a: ";
    std::cin >> a;   

    primeNums(a);
}
//✅