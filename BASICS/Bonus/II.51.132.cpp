//Две цели числа се наричат близнаци, ако едното е сбор от другото с 2. Да се напише програма, която извежда първите 50 двойки сдвоени прости числа
#include <iostream>

bool prime (int x)
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

void print()
{
    int count = 0;
    int index = 0;
    
    while (count < 50)
    {
        if (prime(index) && prime(index + 2))
        {
            std::cout << count << ": " << index << "  " << index + 2 << '\n';
            count++;
        }
        
        index++;
    }
}

int main()
{ 
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    print();
}
//✅