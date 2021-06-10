//Создайте класс Queue, хранящий целые числа в виде очереди. Реализовать операции push (добавление в конец очереди) и front (взятие элемента из начала очереди). Количество элементов очереди не ограничено.
//Доп: Сделать вывод отсортированной очереди.

#include "queue.h"
#include <iostream> 

int main()
{
	setlocale(LC_ALL, "rus");
	int size = 0;

	std::cout << "Введите размер очереди:\n";
	std::cin >> size;

	Queue q1(size);
	q1.input();

	std::cout << "Очередь: ";
	q1.output();

	std::cout << std::endl;
	std::cout << "Задний элемент:" << std::endl;
	std::cout << q1.back();

	std::cout << std::endl;
	std::cout << "Передний элемент: " << std::endl;
	std::cout << q1.front();

	std::cout << std::endl;
	std::cout << "Текущая очередь:\n ";
	q1.output();

	std::cout << std::endl;
	std::cout << "Сортировка очереди";
	q1.bubbleSort();

	std::cout << std::endl;
	std::cout << "Текущая очередь:\n ";
	q1.output();

	return 0;
}