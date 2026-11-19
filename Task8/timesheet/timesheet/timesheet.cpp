#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    double workedHours = 0.0;
    int hourlyRate = 0;

    std::cout << "Введите отработанное время (в часах): ";
    std::cin >> workedHours;
    std::cout << "Введите часовую ставку (в рублях): ";
    std::cin >> hourlyRate;

    // Временя
    int wholeHours = static_cast<int>(workedHours);
    double fractionalHours = workedHours - wholeHours;
    int minutes = static_cast<int>(fractionalHours * 60 + 0.5);

    // Заработк
    double totalEarnings = workedHours * hourlyRate;
    int totalKopecks = static_cast<int>(totalEarnings * 100 + 0.5);
    int rubles = totalKopecks / 100;
    int kopecks = totalKopecks % 100;

    // Выводы
    std::cout << "\nЧасы: " << workedHours << ", ставка: " << hourlyRate << "\n";
    std::cout << "Время: " << wholeHours << " ч " << minutes << " мин\n";
    std::cout << "Заработок: " << rubles << " руб " << kopecks << " коп\n";

    // Исследование:
    // Если убрать +0.5 из формулы минут, будет 20 минут вместо 21.
    // потому что десятичная дробь 8.35 в double 
    // 8.3499999999999996... 
    // После вычитания 8 и умножения на 60 получается 20.99999999999998..., 
    // а static_cast<int> без +0.5 удоляет дробную часть .9999..., оставляя 20.

    return 0;
}
