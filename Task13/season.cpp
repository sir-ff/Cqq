#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int month;
    std::cout << "Введите число: ";
    std::cin >> month;

    switch (month)
    {
    case 12:
    case 1:
    case 2:
        std::cout << "Зима";
        break;
    case 3:
    case 4:
    case 5:
        std::cout << "Весна";
        break;
    case 6:
    case 7:
    case 8:
        std::cout << "Лето";
        break;
    case 9:
    case 10:
    case 11:
        std::cout << "Осень";
        break;
    default:
        std::cout << "нема";

    }

}
