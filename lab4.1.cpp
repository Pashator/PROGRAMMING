//вариант 2
#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");
    int A, B, C;
    std::cout << "Введите A, B и C: ";
    std::cin >> A >> B >> C;

    if (A % C == 0 && B % C == 0) {
        std::cout << "(A + B) / C = " << (A + B) / C << std::endl;
    }
    else if (A % C == 0 && B % C != 0) {
        std::cout << "A / C + B = " << A / C + B << std::endl;
    }
    else {
        std::cout << "A - B - C = " << A - B - C << std::endl;
    }

    return 0;
}
