#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Russian");
    int price, qty;
    std::cin >> price >> qty;

    if (qty < 1) {
        std::cout << "Количество должно быть не меньше 1\n";
        return 0;
    }

    int sum = price * qty;
    int percent = 0;

    if (sum > 5000) {
        percent = 10;
    }
    else if (sum > 1000) {
        percent = 5;
    }
    else {
        percent = 0;
    }

    int discount = sum * percent / 100;
    int to_pay = sum - discount;

    std::cout << "Сумма: " << sum << ", скидка " << percent << "%, к оплате: " << to_pay << '\n';

    int paid;
    std::cin >> paid;

    if (paid >= to_pay) {
        std::cout << "Оплата прошла\n";
        std::cout << "Сдача: " << (paid - to_pay) << " руб\n";
    }
    else {
        std::cout << "Недостаточно средств: ещё " << (to_pay - paid) << " руб\n";
    }

    std::cout << "Категория: " << (to_pay > 4000 ? "существенная скидка" : "обычная покупка") << '\n';

    return 0;
}
