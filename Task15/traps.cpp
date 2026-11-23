#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "1) " << (5 > 3 && 8 < 6) << " "
              << (5 > 3 || 8 < 6) << std::endl;

    int age = 5;

    if (age = 18)
    {
        std::cout << "2) ветка выполнилась" << std::endl;
    }
    std::cout << "2) age = " << age << std::endl;

    int x = -5;

    std::cout << "3) " << (0 < x < 10) << " "
              << (x > 0 && x < 10) << std::endl;

    int a = 16;
    bool hasPass = true;

    std::cout << "4) " << !(a >= 18 && hasPass) << " "
              << (a < 18 || !hasPass) << std::endl;
    a = 25;
    std::cout << "4) " << !(a >= 18 && hasPass) << " "
              << (a < 18 || !hasPass) << std::endl;
    return 0;
}

