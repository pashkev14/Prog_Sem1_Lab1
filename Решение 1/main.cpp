/* 
	Программа по вычислению полиномов №33, №28 и произведения их результатов
	P(x) = -8980,032x^6 - 186,34x^4 - 649,23x^2 (полином №33)
    Q(x) = 9,09x^9 - 9,09x^3 + 9,09x (полином №28)
    Автор: Савин Павел Алексеевич, группа 2309. Версия 1.1.1
    Даты: Начало: 06.09.22 Окончание: 08.09.22
*/

#include <iostream>
#include <iomanip>

int main() {
	std::setlocale(LC_ALL, "Russian");
	double x, y, z, p1, p2, p3, q1, q2, q3;
	std::cout << "Программа для работы с полиномами\nАвтор: Савин Павел\nПолиномы:\n1) -8980,032x^6 - 186,34x^4 - 649,23x^2\n2) 9,09x^9 - 9,09x^3 + 9,09x\nВведите x: ";
	std::cin >> x;
	y = x * x, z = 9.09 * x;
	p1 = (-8980.032 * y) - 186.34;
	std::cout << "1 шаг: " << std::setw(14) << std::setprecision(11) << std::fixed << p1 << "\n";
	p2 = (p1 * y) - 649.23;
	std::cout << "2 шаг: " << std::setw(14) << std::setprecision(11) << std::fixed << p2 << "\n";
	p3 = p2 * y;
	std::cout << "3 шаг и итоговое значение первого полинома при x = " << std::setw(10) << std::setprecision(9) << std::fixed << x << ": " << std::setw(14) << std::setprecision(11) << p3 << "\n";
	q1 = (y * y * y) - 1;
	std::cout << "1 шаг: " << std::setw(14) << std::setprecision(11) << std::fixed << q1 << "\n";
	q2 = (q1 * y) + 1;
	std::cout << "2 шаг: " << std::setw(14) << std::setprecision(11) << std::fixed << q2 << "\n";
	q3 = q2 * z;
	std::cout << "3 шаг и итоговое значение второго полинома при x = " << std::setw(10) << std::setprecision(9) << std::fixed << x << ": " << std::setw(14) << std::setprecision(11) << std::fixed << q3 << "\n";
	std::cout << "Произведение значений двух полиномов: " << std::setw(14) << std::setprecision(11) << std::fixed << p3 * q3 << std::endl;
	return 0;
}