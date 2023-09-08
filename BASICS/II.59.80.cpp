//Да се провери в записа на дадено неотрицателно число присъства цифрата с
#include <iostream>

bool find(unsigned int n, unsigned int c)
{
    bool flag = false;

    if (n == 0 && c == 0)
        return true;

    while (n != 0)
    {
        int i = 0;
        i = n % 10;

        if (i == c)
        {
            return true;
            break;
        }

        else n /= 10;
    }

    return flag;
}

int main ()
{
    std::cout << '\n';
    std::cout << "-----------------\n";

    unsigned int n, c;
    std::cout << "[ insert a value for n ]\n> n: ";
    std::cin >> n;
    std::cout << "[ insert a value for c ]\n> c: ";
    std::cin >> c;

    if (find(n, c))
        std::cout << "[ true ]\n";
    
    else std::cout << "[ false ]\n";
}
//✅