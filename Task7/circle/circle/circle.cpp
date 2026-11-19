#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    const double PI = 3.14159;
    double r;

    std::cout << "Радиус: ";
    std::cin >> r;

    double area = r * r * PI;
    std::cout << "Площадь: " << area << '\n';

    return 0;
}

