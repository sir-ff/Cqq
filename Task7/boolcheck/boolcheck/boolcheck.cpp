#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    std::cout << "Числа a и b: ";
    std::cin >> a >> b;

    std::cout << "a == b: " << (a == b) << '\n';
    std::cout << "a != b: " << (a != b) << '\n';
    std::cout << "a > b: " << (a > b) << '\n';
    std::cout << "a < b: " << (a < b) << '\n';
    std::cout << "a >= b: " << (a >= b) << '\n';
    std::cout << "a <= b: " << (a <= b) << '\n';

    return 0;
}
