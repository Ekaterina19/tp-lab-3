
#include <iostream>
#include"DateTime.h"
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Rus");
	DateTime dt(11, 11, 2018);
	std::cout << "������� ���� -\t ";
	std::cout << dt.getToday() << std::endl;
	std::cout << "����� -\t ";
	std::cout << dt.getYesterday() << std::endl;
	std::cout << "������ -\t ";
	std::cout << dt.getTomorrow() << std::endl;
	std::cout << "4 ��� ����� -\t ";
	std::cout << dt.getPast(4) << std::endl;
	std::cout << "4 ��� ������ -\t ";
	std::cout << dt.getFuture(4) << std::endl;
	DateTime dt1(10, 11, 2018);
	std::cout << "������� ����� �����" << std::endl;
	std::cout << dt.getDifference(dt1) << std::endl;
	system("pause");
	return 0;
}