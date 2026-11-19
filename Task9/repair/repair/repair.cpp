#include <iostream>

/*
Найденные ошибки:
1. Строка А: не было ; в конце
2. Строка Б: было 'statc_cast' а надо 'static_cast'.
3. Строка В: не закрыта скобка '>' у 'int'.
*/

int main()
{
    setlocale(LC_ALL, "Russian");
    int goals = 27;                                     // строка А
    double avgGoals = static_cast<double>(goals) / 8;   // строка Б
    std::cout << "Всего голов: " << goals << std::endl;
    std::cout << "Среднее за матч: " << avgGoals << std::endl;
    std::cout << "Мячей сыграно: " << static_cast<int>(8.9) << std::endl;  // строка В
    return 0;
}

