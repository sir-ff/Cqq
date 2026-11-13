#include <iostream>
#include <string>

int main()
{
    std::string name;
    int birthYear;
    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "In what year were you born? ";
    std::cin >> birthYear;
    std::cout << "hello, " << name << "!" << std::endl;
    std::cout << "for you, approximately " << 2026 - birthYear << " yearas." << std::endl;
    return 0;
}
