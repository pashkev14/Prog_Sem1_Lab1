/* 
	��������� �� ���������� ��������� �33, �28 � ������������ �� �����������
	P(x) = -8980,032x^6 - 186,34x^4 - 649,23x^2 (������� �33)
    Q(x) = 9,09x^9 - 9,09x^3 + 9,09x (������� �28)
    �����: ����� ����� ����������, ������ 2309. ������ 1.1.1
    ����: ������: 06.09.22 ���������: 08.09.22
*/

#include <iostream>
#include <iomanip>

int main() {
	std::setlocale(LC_ALL, "Russian");
	double x, y, z, p1, p2, p3, q1, q2, q3;
	std::cout << "��������� ��� ������ � ����������\n�����: ����� �����\n��������:\n1) -8980,032x^6 - 186,34x^4 - 649,23x^2\n2) 9,09x^9 - 9,09x^3 + 9,09x\n������� x: ";
	std::cin >> x;
	y = x * x, z = 9.09 * x;
	p1 = (-8980.032 * y) - 186.34;
	std::cout << "1 ���: " << std::setw(14) << std::setprecision(11) << std::fixed << p1 << "\n";
	p2 = (p1 * y) - 649.23;
	std::cout << "2 ���: " << std::setw(14) << std::setprecision(11) << std::fixed << p2 << "\n";
	p3 = p2 * y;
	std::cout << "3 ��� � �������� �������� ������� �������� ��� x = " << std::setw(10) << std::setprecision(9) << std::fixed << x << ": " << std::setw(14) << std::setprecision(11) << p3 << "\n";
	q1 = (y * y * y) - 1;
	std::cout << "1 ���: " << std::setw(14) << std::setprecision(11) << std::fixed << q1 << "\n";
	q2 = (q1 * y) + 1;
	std::cout << "2 ���: " << std::setw(14) << std::setprecision(11) << std::fixed << q2 << "\n";
	q3 = q2 * z;
	std::cout << "3 ��� � �������� �������� ������� �������� ��� x = " << std::setw(10) << std::setprecision(9) << std::fixed << x << ": " << std::setw(14) << std::setprecision(11) << std::fixed << q3 << "\n";
	std::cout << "������������ �������� ���� ���������: " << std::setw(14) << std::setprecision(11) << std::fixed << p3 * q3 << std::endl;
	return 0;
}