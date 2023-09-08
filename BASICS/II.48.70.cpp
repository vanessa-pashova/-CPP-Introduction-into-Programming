//Програма за намиране на редицата на Фибоначи
#include <iostream>

#include <iostream>

int fibonacci(int n) 
{
    if (n <= 0) 
        return 0;

     else if (n == 1) 
        return 1;

     else 
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    unsigned int terms = 0;

    std::cout << "Enter the number of Fibonacci terms: ";
    std::cin >> terms;

    std::cout << "Fibonacci Series: ";
    for (int i = 0; i < terms; ++i) 
        std::cout << fibonacci(i) << " ";

    return 0;
}
//✅
