#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    int age = 0;
    int passInput = 0;

    std::cin >> age >> passInput;

    bool hasPass = (passInput != 0);
    bool isAdult = (age >= 18);
    bool isAllowed = isAdult && hasPass;
    bool hasDiscount = (age < 12) || (age >= 65);
    bool isDenied = !(isAdult && hasPass);

    std::cout << "Взрослый: " << isAdult << '\n';
    std::cout << "Допуск в зал: " << isAllowed << '\n';
    std::cout << "Льгота: " << hasDiscount << '\n';
    std::cout << "Отказ: " << isDenied << '\n';
    std::cout << "Совпадение де Моргана: "
        << (!(age < 18 || !hasPass)) << ' '
        << (age >= 18 && hasPass) << '\n';

    return 0;
}
