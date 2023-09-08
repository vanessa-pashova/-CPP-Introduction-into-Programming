//Да се напише програма, която въвежда координатите на две полета от една шахматна дъска и проверява може ли с един ход да се стигне от първото поле до второто с:
//а) пешка
//б) топ
//в) офицер
//Въвеждането да става, докато данните са коректни
#include <iostream>

bool validation (int n, int l)
{
    bool flag = false;

    if (0 < n && n < 9)
        return true;

    if (0 < l && l < 9)
        return true;

    return flag;
}

void Bishop(int oldX, int oldY, int newX, int newY)
{
    if ((newX == oldX) && (newY == oldY + 1))
        std::cout << "[ it's bishop ]\n";
}

void Top(int oldX, int oldY, int newX, int newY)
{
    if (((oldX > newX) && (oldY == newY)) || ((oldX < newX) && (oldY == newY)))   
        std::cout << "[ it's top ]\n";

    else if (((oldX == newX) && (oldY > newY)) || ((oldX == newX) && (oldY < newY)))
        std::cout << "[ it's top ]\n";
}

void Officer(int oldX, int oldY, int newX, int newY)
{
    bool flag = false;

    if (newX > oldX && newY > oldY)
    {
        for (int i = 1; i < 8; i++)
        {
            if ((newX == i + oldX) && (newY == i + oldY))
                flag = true;
        }
    }

    else if (newX < oldX && newY > oldY)
    {
        for (int i = 1; i < 8; i++)
        {
            if (newY == i + oldY)
                flag = true;

            int j = i;
            if (newX == oldX + j)
                flag = true;
        }
    }

    else if (newX < oldX && newY < oldY)
    {
        for (int i = 8; i > 0; i--)
        {
            if ((newX == oldX - i) && (newY == oldY - 1))
                flag = true;
        }
    }

    else if (newX > oldX && newY < oldY)
    {
        for (int i = 1; i < 8; i++)
        {
            if (newX == i + oldX)
                flag = true;

            int j = i;
            if (newY == oldY - j)
                flag = true;
        }
    }

    if (flag)
        std::cout << "[ it's officer ]\n";
}

int main ()
{
    std::cout << '\n';
    std::cout << "-------------------\n";

    int oldX, newX;
    int oldY, newY;

    do {
        std::cout << "[ insert first position ]\n> number: ";
        std::cin >> oldX;
        std::cout << "> letter: ";
        std::cin >> oldY;
        std::cout << '\n';
    } while (!validation(oldX, oldY));

    do {
        std::cout << "[ insert first position ]\n> number: ";
        std::cin >> newX;
        std::cout << "> letter: ";
        std::cin >> newY;
        std::cout << '\n';
    } while (!validation(newX, newY));

    Bishop(oldX, oldY, newX, newY);
    Top(oldX, oldY, newX, newY);
    Officer(oldX, oldY, newX, newY);
}
//✅