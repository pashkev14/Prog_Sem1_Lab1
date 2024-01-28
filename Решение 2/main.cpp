/*
	Программа по вычислению полиномов №33, №28 и произведения их результатов
	P(x) = -8980,032x^6 - 186,34x^4 - 649,23x^2 (полином №33)
	Q(x) = 9,09x^9 - 9,09x^3 + 9,09x (полином №28)
	Автор: Савин Павел Алексеевич, группа 2309. Версия 1.2.1
	Даты: Начало: 06.09.22 Окончание: 08.09.22
*/

#include <iostream>
#include <iomanip>

int main() {
	std::setlocale(LC_ALL, "Russian");
	double x, y, z, p, q;
	std::cout << "Программа для работы с полиномами\nАвтор: Савин Павел\nПолиномы:\n1) -8980,032x^6 - 186,34x^4 - 649,23x^2\n2) 9,09x^9 - 9,09x^3 + 9,09x\nВведите x: ";
	std::cin >> x;
	y = x * x, z = 9.09 * x;
	p = -(8980.032 * y * y * y) - (186.34 * y * y) - (649.23 * y);
	std::cout << "Значение первого полинома при x = " << std::setw(5) << std::setprecision(4) << std::fixed << x << ": " << std::setw(16) << std::setprecision(15) << std::fixed << p << "\n";
	q = (z * y * y * y * y) - (z * y) + z;
	std::cout << "Значение второго полинома при x = " << std::setw(5) << std::setprecision(4) << std::fixed << x << ": " << std::setw(16) << std::setprecision(15) << std::fixed << q << "\n";
	std::cout << "Произведение значений двух полиномов: " << std::setw(16) << std::setprecision(15) << std::fixed << p * q << std::endl;
	return 0;
}