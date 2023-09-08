//Да се напише програма, която намира всички трицифрени числа от интервала [m, n], на които като се махне цифрата на десетиците, намаляват цяло число пъти (m < n)
#include <iostream>

int chopNumber(int num)
{
    int newNum = 0;
    newNum = (num / 100) * 10;  //(123 / 100) * 10 = 1 * 10 = 10;
    num = num % 10;      //(123 % 10) = 3
    newNum += num;      //10 = 10 + 3 = 13

    return newNum;
}

bool checkDevision (int num)
{
    bool flag = false;
    int newNum = chopNumber(num);

    if (num % newNum == 0)
        flag = true;

    return flag;
}

void searchAndFind (int m, int n)
{
    int newNum = 0;
    for (int i = m; i <= n; i++)
    {
        if(checkDevision(i))
            std::cout << "[ " << i << " ]\n";
    }
}

int main ()
{
    std::cout << '\n';
    std::cout << "-------------------------\n";

    int m = 0, n = 0;
    std::cout << "[ insert values for m and n ]\n";
    do {
        std::cout << "> m: ";
        std::cin >> m;
        std::cout << "> n: ";
        std::cin >> n;
        std::cout << '\n';
    } while ((n < m ) || (n < 100 || n > 999 || 100 < m || m > 999));

    searchAndFind(m, n);
}
//✅