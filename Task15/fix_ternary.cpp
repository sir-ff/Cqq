#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int score;
    std::cout << "Введите баллы: ";
    std::cin >> score;

    std::cout << (score >= 60 ? "сдан" : "не сдан") << std::endl;

    std::cout << (score >= 90 ? "отлично" : "хорошо") << std::endl;
    return 0;
}

