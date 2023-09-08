//Да се напише програма, която проверява коя цифра се среща най-често в дадено неотрицателно число
#include <iostream>

#include <iostream>

int mostCommonDigit(long x)
{
    int digit = 0, count1 = 0, count2 = 0, max = 0;

    while (digit < 10)
    {
        long temp = x;
        count1 = 0;

        while (temp != 0)
        {
            if (temp % 10 == digit)
                count1++;

            temp /= 10;
        }

        if (count1 > count2)
        {
            max = digit;
            count2 = count1;
        }

        digit++;
    }

    return max;
}

int main()
{ 
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    unsigned long num = 0;
    std::cout << "[ insert a value for num ]\n> num: ";
    std::cin >> num;   

    std::cout << "[ the most comon digit is ] --> " << mostCommonDigit(num);
}
//✅