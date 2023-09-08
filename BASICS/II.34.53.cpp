//Да се състави програма, която въвежда два последователни момента от месец януари. Всеки ден е зададен с ден, час, минута и определя в часове и монути дължината на 
//интервала от време между тях. Въвеждането да продължи докато се въведат коректни данни.
#include <iostream>

bool validation (int d, int h, int m)
{
    bool flag = false;

    if (0 < d && d < 32)
        flag = true;

    if (-1 < h && h < 24)
        flag = true;

    if (-1 < m && m < 60)
        flag = true;

    return flag;
}

void calculation (int d1, int d2, int h1, int h2, int m1, int m2)
{
    int diffMin = 0;
    int diffH = 0;

    if (m1 != 0)
    {
        diffMin = 60 - m1;
        diffH = 23 - h1;
    }

    else 
        diffH = 24 - h1;

    int diffDay = d2 - d1 - 1;
    int diffDayInHours = diffDay * 24;

    int sumM = diffMin + m2;
    int sumH = diffH + diffDayInHours + h2;

    std::cout << "[ sum of hours ] -> " << sumH << "\n[ sum of minutes ] -> " << sumM << "\n\n";
}

int main ()
{
    std::cout << '\n';
    std::cout << "-------------------------\n";

    int day1, day2, hour1, hour2, min1, min2;
    
    do {
        std::cout << "[ insert the first moment of january ]\n";
        std::cout << "> day: ";
        std::cin >> day1;
        std::cout << "> hour: ";
        std::cin >> hour1;
        std::cout << "> minutes: ";
        std::cin >> min1;
        std::cout << '\n';
    } while (!validation(day1, hour1, min1));

    do {
        std::cout << "[ insert the second moment of january ]\n";
        std::cout << "> day: ";
        std::cin >> day2;
        std::cout << "> hour: ";
        std::cin >> hour2;
        std::cout << "> minutes: ";
        std::cin >> min2;
        std::cout << '\n';
    } while (!validation(day2, hour2, min2));

    calculation(day1, day2, hour1, hour2, min1, min2);
}
//✅