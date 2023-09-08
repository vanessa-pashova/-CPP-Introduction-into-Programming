//Да се напише програма, която намира броя на цифрите в десетичния запис на едно цяло положително число
#include <iostream>

int count (int x)
{
    int i = 0;
    while (x != 0)
    {
        x /= 10;
        i++;
    }

    return i;
}

int main ()
{
    std::cout <<'\n';
    std::cout << "------------------------\n";

    int n = 0;
    do {
        std::cout << "[ insert a value for n ]\n> n: ";
        std::cin >> n;
    } while (n < 0);

    std::cout << "[ count of digits in the number ] -> " << count(n) << '\n';
}
//✅