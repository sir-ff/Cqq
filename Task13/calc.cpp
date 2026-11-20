#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int a, b;
    char op;

    cin >> a >> op >> b;

    switch (op) {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;
    case '/':
        if (b == 0) {
            cout << "Ошибка: деление на ноль";
        }
        else {
            cout << a << " / " << b << " = " << a / b << " (остаток " << a % b << ")";
        }
        break;
    case '%':
        cout << a << " % " << b << " = " << a % b;
        break;
    default:
        cout << "Операция " << op << " не поддерживается";
        break;
    }

    return 0;
}
