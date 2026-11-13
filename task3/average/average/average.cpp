#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");

    int a, b, c;
    std::cout << "Введите три оценки: ";
    std::cin >> a >> b >> c;

    std::cout << "Средний балл (целочисленный): " << (a + b + c) / 3 << std::endl;
    std::cout << "Средний балл (точный): " << (a + b + c) / 3.0 << std::endl;

    // разница между 3 и 3.0:
    // 3 выполняет целочисленное деление
    // 3.0 выполняет вещественное дробное деление
}
