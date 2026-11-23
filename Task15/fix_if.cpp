#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int age;
    std::cout << "Введите кол-во лет: ";
    std::cin >> age;
    if (age >= 18)
    {
        std::cout << "Вход разрешён" << std::endl;
    }
    else
    {
        std::cout << "Вход запрещён" << std::endl;
        std::cout << "Приходите в 18+" << std::endl;
    }
    return 0;
}
