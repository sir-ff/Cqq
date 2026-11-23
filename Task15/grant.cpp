#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int avg, skips;
    std::cin >> avg >> skips;

    if (avg < 0 || avg > 10)
    {
        std::cout << "Ошибка: балл от 0 до 10" << std::endl;
        return 0;
    }

    std::cout << (avg >= 8 && skips <= 2 ? "Стипендия назначена" : "Стипендия не назначена") << std::endl;

    return 0;
}

