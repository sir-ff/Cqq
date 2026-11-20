#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    std::cin >> a >> b >> c;

    bool exists = (a > 0 && b > 0 && c > 0) && (a + b > c && a + c > b && b + c > a);

    std::cout << "Стороны " << a << " " << b << " " << c << ": ";
    if (exists) {
        std::cout << "треугольник существует\n";
    }
    else {
        std::cout << "треугольник не существует\n";
    }

    return 0;
}
