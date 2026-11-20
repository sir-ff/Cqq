#include <iostream>
#include <string>

int main() 
{
    setlocale(LC_ALL, "Russian");
    const int PIN = 1234;
    int entered_pin;
    std::cin >> entered_pin;

    if (PIN != entered_pin) {
        std::cout << "Отказ: неверный пин\n";
        return 0;
    }

    int age;
    std::cin >> age;

    int count;
    std::cin >> count;

    // Поставил до выбора тарифа: если билетов меньше 1,
    // нет смысла определять категорию по возрасту — сразу выходим.
    // Без этой проверки программа посчитает 0 или отрицательную сумму.
    if (count < 1) {
        std::cout << "Количество должно быть не меньше 1\n";
        return 0;
    }

    std::string category;
    int price = 0;

    if (age < 12) {
        category = "детский (100 руб)";
        price = 100;
    }
    else if (age <= 17) {
        category = "школьный (150 руб)";
        price = 150;
    }
    else if (age <= 64) {
        category = "взрослый (250 руб)";
        price = 250;
    }
    else {
        category = "пенсионный (120 руб)";
        price = 120;
    }

    std::cout << "Категория: " << category << "\n";
    std::cout << "К оплате: " << price * count << " руб\n";

    return 0;
}
