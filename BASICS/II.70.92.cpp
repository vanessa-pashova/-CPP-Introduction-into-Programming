//Да се напише програма, която намира десетичните цифри, които не се срещат в записа на дадено неотрицателно число х.
#include <iostream>

void missingDigits (int n)
{
    for (int i = 0; i < 10; i++)
    {
        int temp = n;
        bool flag = false;
        while (temp != 0)
        {
            int check = temp % 10;
            
            if (check == i)
            {
                flag = true;
                break;
            }
            
            else temp /= 10;
        }

        if (flag == false)
            std::cout << "[ " << i << " is missing digit ]\n";
    }
}

int main ()
{
    std::cout << '\n';
    std::cout << "------------------------\n";

    unsigned int num = 0;
    std::cout << "[ insert a value for num ]\n> num: ";
    std::cin >> num;

    missingDigits(num);
}
//✅