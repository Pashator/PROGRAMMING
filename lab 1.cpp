// Переменная в с++ - это именованная область памяти, в которой могут храниться различные значения.

#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	char c1 = 1;
	unsigned char c2 = 4;
	char c5 = 127;
	short s1 = -32768;
	short s2 = 32767;
	unsigned short us1 = 0;
	unsigned short us2 = 65535;
	int i1 = -3333;
	int i2 = 23233;
	unsigned int ui1 = 63444;
	long long ll1;
	unsigned long long ull1;
	char c3 = 'a';
	char c4 = 'b';
	float f = 3.1415f;
	double d = 3.141511111111;
	bool b1 = 1;
	bool b2 = 0;
	std::cout << "Тип данных " << "Размер " << "Мин значение " << "Макс значение\n" << std::endl;
	std::cout << "Числовой\n" << std::endl;
	std::cout << "char " << sizeof(char) << " " << "байт" << " " << "-128" << " " << "127" << "\n" << std::endl;
	std::cout << "unsigned char " << sizeof(unsigned char) << " " << "байт" << " " << "0" << " " << "255" << "\n" << std::endl;
	std::cout << "short " << sizeof(short) << " " << "байта" << " " << "-32768" << " " << "37767" << "\n" << std::endl;
	std::cout << "unsigned short " << sizeof(unsigned short) << " " << "байта" << " " << "0" << " " << "65535" << "\n" << std::endl;
	std::cout << "int " << sizeof(int) << " " << "байта" << " " << "-2^31" << " " << "2^31-1" << "\n" << std::endl;
	std::cout << "unsigned int " << sizeof(unsigned int) << " " << "байта" << " " << "0" << " " << "2^32-1" << "\n" << std::endl;
	std::cout << "long long " << sizeof(long long) << " " << "байт" << " " << "-2^63" << " " << "2^63-1" << "\n" << std::endl;
	std::cout << "unsigned long long " << sizeof(unsigned long long) << " " << "байт" << " " << "0" << " " << "2^64-1" << "\n" << std::endl;
	std::cout << "Символьный\n" << std::endl;
	std::cout << "char " << "1 байт\n" << std::endl;
	std::cout << "Вещественный\n" << std::endl;
	std::cout << "float " << sizeof(float) << " " << "байта" << " " << "6-7 значащих цифр" << "\n" << std::endl;
	std::cout << "double " << sizeof(double) << " " << "байт" << " " << "15-16 значащих цифр" << "\n" << std::endl;
	std::cout << "Логический\n" << std::endl;
	std::cout << "bool " << "1 байт " << "0" << "1\n" << std::endl;
	std::cout << "Примеры арифметических операций\n" << std::endl;
	std::cout << "char - char: " << "4 - 1 = " << c2 - c1 << "\n" << std::endl;
	std::cout << "char + char: " << "127 + 1 = " << c5 + c1 << "\n" << std::endl;
	std::cout << "short + short: " << "32767 + (-32768) = " << s1-s2 << "\n" << std::endl;
	std::cout << "short + short: " << "32767 + 32767 = " << s1 + s1 << "\n" << std::endl;
	std::cout << "unsigned short * unsigned short: " << "0 * 65536 = " << us1 * us2 << "\n" << std::endl;
	std::cout << "int / int: " << "23233 / (-3333) = " << i2 / i1 << "\n" << std::endl;
	std::cout << "int * int: " << "23233 * 23233 * 3333  = " << -i1 * i2 * i2 << "\n" << std::endl;
	std::cout << "char + char: " << "'a' + 'b' = " << c3 + c4 << "\n" << std::endl;
	std::cout << "bool * bool: " << "1 * 0 = " << b1 * b2 << "\n" << std::endl;
	std::cout << "bool * bool: " << "1 * 1 = " << b1 * b1 << "\n" << std::endl;
	return 0;
}