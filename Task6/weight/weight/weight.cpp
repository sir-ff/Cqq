#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    double pounds, inches;

    std::cout << "Вес в фунтах: ";
    std::cin >> pounds;
    std::cout << "Вес в кг: " << pounds * 0.453592 << std::endl;

    std::cout << "Рост в дюймах: ";
    std::cin >> inches;
    std::cout << "Рост в см: " << inches * 2.54 << std::endl;

    return 0;
}
