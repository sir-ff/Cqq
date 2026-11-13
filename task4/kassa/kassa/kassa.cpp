#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    int minutes, price, tickets, paid;

    std::cout << "Минуты, цена, билеты, внесено: ";
    std::cin >> minutes >> price >> tickets >> paid;

    int hours = minutes / 60;
    int remMinutes = minutes % 60;
    int totalCost = price * tickets;
    int change = paid - totalCost;

    std::cout << "Сеанс: " << hours << " ч " << remMinutes << " мин" << std::endl;
    std::cout << "К оплате: " << totalCost << std::endl;
    std::cout << "Сдача: " << change << std::endl;
    std::cout << "Сдача " << change << ". Спасибо!" << std::endl;
}
