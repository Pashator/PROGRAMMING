#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int x, i;
    std::cout << "Введите x и номер бита i: ";
    std::cin >> x >> i;

    x = x & ~(1 << i);
    std::cout << "Результат: " << x << std::endl;

    return 0;
}
