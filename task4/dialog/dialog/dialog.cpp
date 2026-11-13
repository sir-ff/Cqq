#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::string name;
    int birthYear;
    int favNumber;

    std::cout << "Как вас зовут? ";
    std::cin >> name;
    std::cout << "В каком году вы родились? ";
    std::cin >> birthYear;

    std::cout << "Привет, " << name << "!" << std::endl;
    std::cout << "Вам примерно " << 2026 - birthYear << " лет." << std::endl;
}
