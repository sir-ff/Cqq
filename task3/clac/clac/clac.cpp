#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    int a, b;
    std::cout << "Введите два числа: ";
    std::cin >> a >> b;

    std::cout << "Сумма: " << a + b << std::endl;
    std::cout << "Разность: " << a - b << std::endl;
    std::cout << "Произведение: " << a * b << std::endl;
}
