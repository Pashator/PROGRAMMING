#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int x;
    std::cout << "Введите 1 или -1: ";
    std::cin >> x;

    if (x == -1) {
        std::cout << "Negative number";
    }
    else if (x == 1) {
        std::cout << "Positive number";
    }
    else {
        std::cout << "Ошибка: можно использовать только -1 или 1";
    }

    return 0;
}
