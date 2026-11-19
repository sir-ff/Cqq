#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    const int RECORD_SCORE = 2000;

    std::string name;
    int score;
    double hours;

    std::cout << "Введите имя игрока: ";
    std::cin >> name;
    std::cout << "Введите очки: ";
    std::cin >> score;
    std::cout << "Введите часы игры: ";
    std::cin >> hours;

    int level = score / 1000;
    int nextLevel = level + 1;
    int remScore = score % 1000;
    int progress = static_cast<int>((static_cast<double>(remScore) / 1000.0) * 100.0 + 0.5);

    // Берем long long, потому что в обычный int помещается максимум ~2.14 млрд.
    // Наше число 2 161 800 000 больше лимита, и int просто сломался бы и ушел в минус.
    long long milliseconds = static_cast<long long>(hours * 3600.0 * 1000.0 + 0.5);

    char rank = static_cast<char>('D' - level);
    bool isRecordBroken = (score > RECORD_SCORE);

    std::cout << "Игрок: " << name << std::endl;
    std::cout << "Очки: " << score << ", уровень: " << level << std::endl;
    std::cout << "Прогресс до уровня " << nextLevel << ": " << progress << "%" << std::endl;
    std::cout << "Миллисекунд в игре: " << milliseconds << std::endl;
    std::cout << "Ранг: " << rank << std::endl;
    std::cout << "Рекорд побит: " << isRecordBroken << std::endl;

    return 0;
}

/*
Исследование (если ввести 5000 очков):
1. Уровень будет равен 5 (5000 / 1000).
2. Вместо буквы выведется знак вопроса '?'. Дело в том, что компьютер хранит буквы
   в виде чисел (по таблице ASCII). У буквы 'D' номер 68. Когда мы отнимаем от 68 уровень 5,
   получается 63. А под номером 63 в таблице стоит не буква, а символ '?'.
3. Буквы получаются только на уровнях от 0 до 3:
   - уровень 0 -> 'D' (номер 68)
   - уровень 1 -> 'C' (номер 67)
   - уровень 2 -> 'B' (номер 66)
   - уровень 3 -> 'A' (номер 65)
   Начиная с 4-го уровня буквы заканчиваются: на 4-м выведется '@', на 5-м — '?',
   на 6-м — '>' и так далее. А с 37-го уровня вообще пойдут невидимые служебные знаки.
*/

