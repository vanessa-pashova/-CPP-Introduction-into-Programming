//Да се напише програма, в която се въвежда цяло положително число и се проверява колко различни цифри съдържа
#include <iostream>

int countOfDigits (long x)
{
    int counter = 0;
    while (x != 0)
    {
        x /= 10;
        counter++;
    }

    return counter;
}

int differentDigits (long x)
{
    bool flag = false;
    int count = 0, digit = 0, loop = 0;
    while (loop < 10)
    {
        flag = false;
        int temp = x;
        while (temp != 0)
        {
            if (temp % 10 == digit)
            {
                flag = true; 
                break;
            }

            temp /= 10;
        }

        if (flag == true)
            count++;

        digit++;
        loop++;
    }

    return count;
}

int main()
{ 
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    unsigned long n = 0;
    std::cout << "[ insert a value for n ]\n> n :";
    std::cin >> n;

    std::cout << "[ there are " << differentDigits(n) << " digits in " << n << " ]\n";
}
//✅