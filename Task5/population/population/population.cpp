#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Rus");
    long long city = 0;
    long long country = 0;

    std::cout << "Население города и страны: ";
    std::cin >> city >> country;

    long long total = city + country;
    std::cout << "Итого: " << total << "\n";

    // Сообщение компилятора при попытке объявить int earth = 8100000000;:
    // warning: overflow in conversion from 'long int' to 'int' changes value from '8100000000' to '-489934592' [-Woverflow]
    long long earth = 8100000000LL;
    std::cout << "Население Земли: " << earth << "\n";
}
