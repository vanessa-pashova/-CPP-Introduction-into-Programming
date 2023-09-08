//Дадено е естествено число, което е положително; да се напише програма, която извежда всички n-цифрени числа, равни на сумата на факториелите на цифрите си
#include <iostream>
#include <iostream>

int countOfDigits (int x)
{
    int counter = 0;
    while (x != 0)
    {
        x /= 10;
        counter++;
    }

    return counter;
}

int fact (int y)
{
    int index = 2, factoriel = 1;
    while (index <= y)
    {
        factoriel *= index;
        index++;
    }
    
    return factoriel;
}

int sumOfFact(int y)
{
    int temp = y, sum = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += fact(digit);
        temp /= 10;
    }

    return sum;
}

int power(int n) {
    return pow(10, n);
}

void print (int z)      //3 --> Vn: 99 < n ^ n < 1000
{
    int start = power(z), finish = power(z + 1);
    for (int i = start; i < finish; i++)        //123 != 1 + 2 + 2.3 = 1 + 2 + 6 = 9
    {
        if (i == sumOfFact(i))
            std::cout << "[ it's true for " << i << " with sum of facts " << sumOfFact(i) << " ]\n";
    }
}

int main()
{ 
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    unsigned int n;
    std::cout << "[ insert a value for n ]\n> n: ";
    std::cin >> n;   

    print(n);
}
//✅