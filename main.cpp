#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Введіть три числа: ";
    cin >> a >> b >> c;

    int sum;

    if (a >= b && a >= c) {
        sum = b + ((b >= c) ? b : c);
    }
    else if (b >= a && b >= c) {
        sum = a + ((a >= c) ? a : c);
    }
    else {
        sum = a + ((a >= b) ? a : b);
    }

    cout << "Сума двох найбільших чисел: " << sum << endl;

    // Дано радіус кола r і сторона великого квадрата a.
      // Знайти площу круга, вписаного в квадрат.

    double r, a;
    cout << "Введіть радіус кола: ";
    cin >> r;
    cout << "Введіть сторону квадрата: ";
    cin >> a;

    // Знаходимо площу вписаного кола
    double S = std::pi * (r * r - (a / 2) * (a / 2));

    // Виводимо результат
    scout << "Площа вписаного кола: " << S << std::endl;

    return 0;
}