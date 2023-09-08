//Да се напише програма, която извежда първите n прости числа, за които сборът от съставящите ги цифри е четно число/нечетно число
#include <iostream>

bool ProstoNumber(int x)
{
    bool flag = true;
    int i = 2, counter = 0;

    while (x > i)
    {
        int temp = x;

        if (temp % i == 0)
            counter++;
    
        i++;
    }

    if (counter > 0) // Променихме този ред, за да проверяваме дали има делители
        return false;

    return flag;
}

int Sum(int x)
{
    int sum = 0;
    if(ProstoNumber(x))
    {
        while (x != 0)
        {
            sum += x % 10;
            x /= 10;
        }
    }

    else return 0;

    return sum;
}

void OddOrEvenSum (int x)
{
    for (int i = 2; i <= x; i++)
    {
        if (Sum(i) % 2 == 0)
            std::cout << "[ " << i << " has EVEN sum ] -> " << Sum(i) << '\n';

        else std::cout << "[ " << i << " has ODD sum ] -> " << Sum(i) << '\n';
    }

}

int main()
{ 
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    unsigned int n = 0;
    std::cout << "[ insert a value for the limit n ]\n> n: ";
    std::cin >> n;
    
    OddOrEvenSum(n);   
}
//✅