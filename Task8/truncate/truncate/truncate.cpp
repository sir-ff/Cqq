#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    double a = 7.9;
    double b = 7.3;
    double c = -7.9;
    double d = -7.3;

    std::cout << a << " -> " << static_cast<int>(a) << '\n';
    std::cout << b << " -> " << static_cast<int>(b) << '\n';
    std::cout << c << " -> " << static_cast<int>(c) << '\n';
    std::cout << d << " -> " << static_cast<int>(d) << '\n';

    // короче static_cast<int> делает отбрасывание дробной части
    // к нулю, а не до меньшего целого.

    return 0;
}
