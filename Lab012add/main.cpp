//�������� ����� Queue, �������� ����� ����� � ���� �������. ����������� �������� push (���������� � ����� �������) � front (������ �������� �� ������ �������). ���������� ��������� ������� �� ����������.
//���: ������� ����� ��������������� �������.

#include "queue.h"
#include <iostream> 

int main()
{
	setlocale(LC_ALL, "rus");
	int size = 0;

	std::cout << "������� ������ �������:\n";
	std::cin >> size;

	Queue q1(size);
	q1.input();

	std::cout << "�������: ";
	q1.output();

	std::cout << std::endl;
	std::cout << "������ �������:" << std::endl;
	std::cout << q1.back();

	std::cout << std::endl;
	std::cout << "�������� �������: " << std::endl;
	std::cout << q1.front();

	std::cout << std::endl;
	std::cout << "������� �������:\n ";
	q1.output();

	std::cout << std::endl;
	std::cout << "���������� �������";
	q1.bubbleSort();

	std::cout << std::endl;
	std::cout << "������� �������:\n ";
	q1.output();

	return 0;
}