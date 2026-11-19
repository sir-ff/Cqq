#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    double price;
    std::cout << "Введите цену: ";
    std::cin >> price;

    int kopecks = static_cast<int>(price * 100 + 0.5);
    int rubles = kopecks / 100;
    int remKopecks = kopecks % 100;

    std::cout << "Рублей: " << rubles << std::endl;
    std::cout << "Копеек: " << remKopecks << std::endl;
    std::cout << "Итого: " << rubles << " руб " << remKopecks << " коп" << std::endl;

    return 0;
}

