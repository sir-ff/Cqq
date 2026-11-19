#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    double distance, time;

    std::cout << "Расстояние и время: ";
    std::cin >> distance >> time;

    std::cout << "Скорость: " << distance / time << std::endl;

    return 0;
}
