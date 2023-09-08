//Да се напише програма, която извежда на екрана всички трицифрени числа абс, за които е в сила а + с = б. (121, 341,...)
#include <iostream>

void abc()
{
    for (int i = 100; i < 1000; i++)
    {
        int f, s, t;
        f = i / 100;
        s = (i / 10) % 10;
        t = i % 10;

        if (f + t == s)
            std::cout << i << "  ";
    }
}

int main()
{ 
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;

    abc();
}
//✅