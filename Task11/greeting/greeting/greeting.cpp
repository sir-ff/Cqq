#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    int hour;
    std::cout << "Введите который час: ";
    std::cin >> hour;

    if (hour < 6) {
        std::cout << "Час " << hour << ": Доброй ночи\n";
    }
    else if (hour < 12) {
        std::cout << "Час " << hour << ": Доброе утро\n";
    }
    else if (hour < 18) {
        std::cout << "Час " << hour << ": Добрый день\n";
    }
    else {
        std::cout << "Час " << hour << ": Добрый вечер\n";
    }

    return 0;
}
