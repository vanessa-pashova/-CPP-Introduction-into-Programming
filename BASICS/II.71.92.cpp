//Да се напише програма, която проверява дали в десетичния запис а дадено неотрицателно число има повтарящи се цифри.
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

void repeatingDigits (int n)
{
    bool flag = false;
    int temp = n, counter = countOfDigits(n); 

    while (counter != 0)
    {
        int x = temp % 10;
        temp /= 10;

        if (x == temp % 10)
        {
            flag = true;
            break;
        }

        else 
            temp /= 10;

        counter--; 
    }

    if (flag)
        std::cout << "[ there are dublicating digits ]\n";
}

int main() {
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    unsigned int n = 0;
    std::cout << "[ insert a value for n ]\n> n: ";
    std::cin >> n;

    repeatingDigits(n);
}
//✅