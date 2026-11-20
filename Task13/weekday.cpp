#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int day;
    std::cout<< "Введите чило: ";
    std::cin >> day;

    switch (day)
    {
    case 1:
        std::cout << "понидельник\n";
        break;
    case 2:
        std::cout << "Вторник\n";
        break;
    case 3:
        std::cout << "Среда\n";
        break;
    case 4:
        std::cout << "Четверг\n";
        break;
    case 5:
        std::cout << "Пятница\n";
        break;
    case 6:
        std::cout << "Суббота\n";
        break;
    case 7:
        std::cout << "Воскресенье\n";
        break;
    default:
        std::cout << "нема\n";
        break;
    
    }
}
