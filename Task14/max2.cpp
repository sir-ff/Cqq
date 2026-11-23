#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    std::cin >> a >> b;

    int max_val = (a > b) ? a : b;
    std::cout << "Максимум: " << max_val << '\n';

    std::cout << (a == b ? "Числа равны" : (a > b ? "Больше первое число" : "Больше второе число")) << '\n';

    return 0;
}
