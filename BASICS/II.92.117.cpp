//Да се напише програма, която за дадено положително цяло число проверява дали десетичното му представяне съдържа някоя цифра повече от веднъж
#include <iostream>

void MostCommon(unsigned long x)
{
    int counter = 0, index = 0;
    while (index < 10)
    {
        counter = 0;
        int temp = x;
        while (temp != 0)
        {
            if (temp % 10 == index) 
                counter++;

            temp /= 10;
        }

        if (counter > 1)
            std::cout << "[ " << index << " was " << counter << " times found ]\n";

        index++;
    } 
}

int main()
{ 
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    unsigned long num = 0;
    std::cout << "[ insert a value for num ]\n> num: ";
    std::cin >> num;  

    MostCommon(num); 
}
//✅