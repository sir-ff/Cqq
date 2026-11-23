#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int group;
    int score;
    std::cout << "Введите группу и баллы: ";
    std::cin >> group;
    std::cin >> score;

    if (group == 1)
    {
        if (score >= 8)
        {
            std::cout << "Утренняя смена, допуск есть" << std::endl;
        }
        else
        {
            std::cout << "Утренняя смена, допуска нет" << std::endl;
        }
    }
    else
    {
        std::cout << "Вечерняя смена" << std::endl;
    }

    return 0;
}
