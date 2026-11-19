#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    int grade1 = 5;
    int grade2 = 5;
    int grade3 = 4;

    int sum = grade1 + grade2 + grade3;

    int int_avg = sum / 3;
    double double_avg = static_cast<double>(sum) / 3;

    std::cout << "Целочисленное среднее: " << int_avg << '\n';
    std::cout << "Дробное среднее: " << double_avg << '\n';

    // Объяснение: в строке оба значения sum и 3 имеют тип int, поэтому выполняется
    // целочисленное деление без остатка. Если записать static_cast<double>(sum / 3),
    // сначала выполнится деление целых чисел и потом 4 станет 4.0.

    return 0;
}
