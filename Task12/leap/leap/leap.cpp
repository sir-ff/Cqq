#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    int year;
    std::cin >> year;

    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    std::cout << "Проверка: " << leap << "\n";
    if (leap) {
        std::cout << year << " — високосный\n";
    }
    else {
        std::cout << year << " — не високосный\n";
    }

    return 0;
}
