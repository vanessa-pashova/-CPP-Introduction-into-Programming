//Да се напише програма, в която се въвеждат две числа и се проверява дали произведението на цифрите на първото число е равно на сбора на цифрите от второто число
#include <iostream>

int countOfDigits (int x)
{
    int count = 0;
    while (x != 0)
    {
        x /= 10;
        count++;
    }

    return count;
}

int production (int a)
{
    int digits = countOfDigits(a), prod = 1;
    while (a != 0)
    {
        prod *= a % 10;
        a /= 10;
    }

    return prod;
}

int sum (int b)
{
    int digit = countOfDigits(b), prod = 0;
    while (b != 0)
    {
        prod += b % 10;
        b /= 10;
    }

    return prod;
}

bool validation (int x, int y) {
    return (production(x) == sum(y));
}

void print (int x, int y)
{
    if (validation(x, y))
        std::cout << "[ true ]\n";

    else std::cout << "[ false ]\n";
}

int main()
{ 
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    int a, b;
    std::cout << "[ insert a value for a ]\n> a: ";
    std::cin >> a;   
    std::cout << "[ insert a value for a ]\n> a: ";   
    std::cin >> b;   

    print(a, b);
}
//✅