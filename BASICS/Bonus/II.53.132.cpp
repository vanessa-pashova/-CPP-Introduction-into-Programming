//Да се напише програма, която въвежда цяло число (положително) и намира и извежда всички числа в даден интервал, сумата от цифрите на които е равна на даденото число
#include <iostream>

int sumOfDigits (int x)
{
    int sum = 0;
    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

void print(int x)
{
    for (int i = 0; i <= 5000; i++)
    {
        if(sumOfDigits(i) == x)
            std::cout << i << "  ";
    }
}

int main()
{ 
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    unsigned int x = 0;
    std::cout << "[ insert a value for x ]\n> x: ";
    std::cin >> x;  
    
    print(x);
}
//✅