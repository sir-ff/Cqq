// counter.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    long long ms = 20LL * 365 * 24 * 3600 * 1000;
    std::cout << "Миллисекунд за 20 лет: " << ms << "\n";
}
