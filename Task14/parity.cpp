#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    std::cout << "Введите число: \n";
    std::cin >> num;

    std::cout << num << " - " << (num % 2 == 0 ? "чётное" : "нечётное");

    return 0;
}