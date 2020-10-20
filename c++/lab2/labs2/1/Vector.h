#pragma once
class Vector
{
public:

	Vector();
	~Vector();
	Vector(int size);

	int& operator[] (const int index);



	void setElement(int index, int value);
	int getElement(int index) const;

	void print() const;
	int getSize() const;


	void addItem(int value);
	void insertElement(int index, int value);
	void removeElement(int index);

private:
	int* array_;
	int sizeArray_;
};