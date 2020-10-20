#include<iostream>
#include"Matrix.h"
#include"Vector.h"
/*
Написать классы Vector и Matrix для хранения и обработки одномерных и
двумерных массивов, соответственно. Реализовать задание 2 лабораторной работы №1
с помощью созданных классов. Все функции оформить в виде методов классов.
В коде отразить следующее:
 Выделение и освобождение динамической памяти производить в конструкторах и
деструкторах классов, соответственно.
 В классе Vector перегрузить оператор индексации []. В классе Matrix добавить
методы T at(int i, int j) const и setAt(int i, int j, T val), которые
позволяют получить и установить значение элемента массива с индексом [i][j], T –
это тип элементов массива по варианту (int или double).
 Перегрузить операторы инкремента и декремента (как префиксного, так и
постфиксного). Смысл инкремента / декремента всего массива заключается в
инкременте / декременте каждого элемента массива.
*/

int main() {

	Vector vector;
	vector.print();

	vector.addItem(1);
	vector.addItem(2);
	vector.addItem(3);
	vector.addItem(4);
	vector.addItem(5);
	vector.addItem(6);
	vector.addItem(7);
	vector.print();
	std::cout << std::endl;

	std::cout << vector.getElement(1) << " ";
	std::cout << vector.getElement(2) << " ";
	std::cout << vector.getElement(3) << " ";
	std::cout << vector[4] << " ";
	std::cout << vector[5] << " ";
	std::cout << vector[6] << "\n"<< std::endl;

	vector.setElement(4, 19);
	vector.print();

	vector.removeElement(3);
	vector.print();

	vector.insertElement(4, 1);
	vector.print();

	std::cout << "\nVector end\n" << std::endl;

	Matrix matrix(4, 4);
	matrix.initializationArray2D(7);
	matrix.print();
	std::cout << "\n\n\n" << std::endl;

	matrix.setAt(1, 1, 1);
	matrix.setAt(2, 2, 3);
	matrix.setAt(3, 3, 3);
	matrix.setAt(4, 4, 5);
	matrix.print();
	std::cout << "\n\n\n" << std::endl;


	++matrix;
	matrix.print();
	std::cout << "\n\n\n" << std::endl;

	--matrix;
	matrix.print();
	std::cout << "\n\n\n" << std::endl;

	matrix++;
	matrix.print();
	std::cout << "\n\n\n" << std::endl;

	matrix--;
	matrix.print();
	std::cout << "\n\n\n" << std::endl;

	return 0;
}
