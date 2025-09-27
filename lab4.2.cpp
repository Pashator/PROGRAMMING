#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int N;
    std::cout << "Введите номер дня недели (1-7): ";
    std::cin >> N;

    switch (N) {
    case 1: std::cout << "Понедельник"; break;
    case 2: std::cout << "Вторник"; break;
    case 3: std::cout << "Среда"; break;
    case 4: std::cout << "Четверг"; break;
    case 5: std::cout << "Пятница"; break;
    case 6: std::cout << "Суббота"; break;
    case 7: std::cout << "Воскресенье"; break;
    default:
        std::cout << "Ошибка: в неделе 7 дней!";
    }

    return 0;
}
