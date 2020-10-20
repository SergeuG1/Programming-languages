#include "Matrix.h"
#include <iostream>


Matrix::Matrix(int rows, int cols)
{
	rows_ = rows;
	cols_ = cols;
	array_ = new double* [rows_];
	for (int i = 0; i < rows_; i++)
		array_[i] = new double[cols_];
}



Matrix::~Matrix()
{
	for (int i = 0; i < rows_; i++)
	{
		delete[] array_[i];
	}
	delete[] array_;
}


void Matrix::setAt(int x, int y, double value)
{
	array_[y - 1][x - 1] = value;
}

double Matrix::at(int x, int y) const
{
	return array_[y - 1][x - 1];
}


int Matrix::getRows() const
{
	return rows_;
}

int Matrix::getCols() const
{
	return cols_;
}

int Matrix::size() const
{
	return rows_ * cols_;
}

void Matrix::initializationArray2D(double value)
{
	for (int i = 0; i < rows_; i++)
	{
		for (int j = 0; j < cols_; j++)
		{
			*(*(array_ + i) + j) = value;
		}
	}
}

void Matrix::initializationArray2D(int value)
{
	for (int i = 0; i < rows_; i++)
	{
		for (int j = 0; j < cols_; j++)
		{
			*(*(array_ + i) + j) = value;
		}
	}
}

void Matrix::print() const
{
	for (int i = 0; i < rows_; i++)
	{
		for (int j = 0; j < cols_; j++)
		{
			std::cout << *(*(array_ + i) + j) << "   ";
		}
		std::cout << std::endl;
	}
}


Matrix& Matrix::operator++()
{
	for (int i = 0; i < rows_; i++)
	{
		for (int j = 0; j < cols_; j++)
		{
			*(*(array_ + i) + j) += 1;
		}
	}
	return *this;
}

Matrix Matrix::operator++(int)
{
	Matrix tempArray(*this);
	for (int i = 0; i < rows_; i++)
	{
		for (int j = 0; j < cols_; j++)
		{
			*(*(array_ + i) + j) += 1;
		}
	}
	return tempArray;
}
Matrix& Matrix::operator--()
{
	for (int i = 0; i < rows_; i++)
	{
		for (int j = 0; j < cols_; j++)
		{
			*(*(array_ + i) + j) -= 1;
		}
	}
	return *this;
}



Matrix Matrix::operator--(int)
{
	Matrix tempArray(*this);
	for (int i = 0; i < rows_; i++)
	{
		for (int j = 0; j < cols_; j++)
		{
			*(*(array_ + i) + j) -= 1;
		}
	}
	return tempArray;
}
