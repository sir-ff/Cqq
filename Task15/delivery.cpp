#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int weight, zone, urgent;
    std::cin >> weight >> zone >> urgent;
    
    if (weight < 1)
    {
        std::cout << "Ошибка: вес должен быть не меньше 1" << std::endl;
        return 0;
    }

    int cost = 0;

    switch (zone)
    {
    case 1:
        cost += 50;
        break;
    case 2:
        cost += 120;
        break;
    case 3:
        cost += 250;
        break;
    default:
        std::cout << "Ошибка: зоны с кодом " << zone << " нет" << std::endl;
        return 0;
    }

    if (weight > 10)
    {
        cost += 200;
    }
    else if (weight > 5)
    {
        cost += 100;
    }

    if (urgent == 1)
    {
        cost += 150;
    }

    std::cout << "К оплате: " << cost << " руб" << std::endl;
    std::cout << (weight > 5 && urgent == 1 ? "Груз: тяжёлый срочный" : "Груз: стандартный") << std::endl;

    return 0;
}
