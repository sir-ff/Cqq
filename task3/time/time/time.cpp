#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    int total_minutes;
    std::cout << "Сколько всего минут? ";
    std::cin >> total_minutes;

    int hours = total_minutes / 60;
    int minutes = total_minutes % 60;

    std::cout << "Это " << hours << " ч " << minutes << " мин" << std::endl;
}
