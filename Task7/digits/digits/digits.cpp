#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    int number;
    std::cout << "Двузначное число: ";
    std::cin >> number;

    int tens = number / 10;  // Целочисленное деление даёт первую цифру (десятки)
    int units = number % 10; // Остаток от деления даёт вторую цифру (единицы)

    std::cout << "Цифры: " << tens << " и " << units << '\n';

    return 0;
}

