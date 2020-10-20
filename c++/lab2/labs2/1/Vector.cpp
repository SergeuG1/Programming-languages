#include "Vector.h"
#include<iostream>


Vector::Vector()
{
	sizeArray_ = 0;
	array_ = new int[sizeArray_];

}

Vector::Vector(int size)
{
	sizeArray_ = size;
	array_ = new int[sizeArray_];

}

Vector::~Vector()
{
	delete[] array_;
}


void Vector::setElement(int index, int value)
{
	array_[index] = value;
}

int Vector::getElement(int index) const
{
	return array_[index];
}

int Vector::getSize() const
{
	return sizeArray_;
}

int& Vector::operator[](const int index)
{
	return array_[index];
}


void Vector::print() const
{
	for (int i = 0; i < sizeArray_; i++)
	{
		std::cout << array_[i] << " ";
	}
	std::cout << std::endl;
}

void Vector::addItem(int value)
{
	int* tempArray = new int[sizeArray_ + 1];
	for (int i = 0; i < sizeArray_; i++)
	{
		tempArray[i] = array_[i];
	}
	tempArray[sizeArray_++] = value;

	delete[] array_;
	array_ = tempArray;
}

void Vector::insertElement(int index, int value)
{
	try
	{
		if (index < sizeArray_)
		{
			array_[index] = value;
		}
		else
		{
			throw "Индекс за пределами массива";
		}
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}


}

void Vector::removeElement(int index)
{
	try
	{
		if (index < 0)
		{
			throw("неверное значение индекста")
		}
		int* tempArray = new int[sizeArray_ - 1];
		bool check = true;
		int i = 0, j = 0;
		while (check)
		{

			if (i != index)
			{
				tempArray[i++] = array_[j++];
			}
			else
			{
				tempArray[i++] = array_[++j];
				j++;
			}


			if (i == sizeArray_ - 1)
			{
				check = false;
			}

		}
		sizeArray_--;
		delete[] array_;
		array_ = tempArray;
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	


}