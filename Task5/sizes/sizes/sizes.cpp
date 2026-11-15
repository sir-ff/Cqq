#include <iostream>

int main()
{
    std::cout << "int: " << sizeof(int) << "\n";
    std::cout << "double: " << sizeof(double) << "\n";
    std::cout << "char: " << sizeof(char) << "\n";
    std::cout << "bool: " << sizeof(bool) << "\n";

    // Вывод: Тип int занимает 4 байта (32 бита), один из которых уходит на знак,
    // поэтому в оставшийся 31 бит помещаются числа от -2^31 до 2^31 - 1 (от -2 147 483 648 до 2 147 483 647).
}
