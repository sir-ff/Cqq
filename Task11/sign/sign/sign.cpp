#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    int num;
    std::cout << "Введите число: ";
    std::cin >> num;

    if (num > 0) {
        std::cout << "Число " << num << " — положительное\n";
    }
    else if (num < 0) {
        std::cout << "Число " << num << " — отрицательное\n";
    }
    else {
        std::cout << "Число " << num << " — ноль\n";
    }

    return 0;
}
