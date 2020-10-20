#pragma once
class Matrix
{
public:

	Matrix(int rows, int cols);
	~Matrix();


	double at(int x, int y) const;
	void setAt(int x, int y, double value);

	int getRows() const;
	int getCols() const;

	void print() const;
	int size() const;
	void initializationArray2D(int value);
	void initializationArray2D(double value);


	Matrix& operator++ ();
	Matrix& operator-- ();
	Matrix operator++(int);
	Matrix operator--(int);


private:
	double** array_;
	int rows_;
	int cols_;
};

