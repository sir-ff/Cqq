#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int code;
    std::cout << "Введите число: ";
    std::cin >> code;
    switch (code)
    {
    case 1:
        std::cout << "Эспрессо" << std::endl;
        break;
    case 2:
        std::cout << "Латте" << std::endl;
        break;
    case 3:
        std::cout << "Какао" << std::endl;
        break;
    case 4:
        std::cout << "Мокко" << std::endl;
        break;
    }
    return 0;
}
