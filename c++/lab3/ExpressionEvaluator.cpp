#include "ExpressionEvaluator.h"
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

ExpressionEvaluator::ExpressionEvaluator()
{
	length = 20;
	operands = new double[length];
	for (int i = 0; i < length; i++)
	{
		operands[i] = 0;
	}
}
ExpressionEvaluator::ExpressionEvaluator(int n)
{
	length = n;
	operands = new double[length];
	for (int i = 0; i < length; i++)
	{
		operands[i] = 0;
	}
}
ExpressionEvaluator::~ExpressionEvaluator()  
{
	cout << "E" << endl;

	delete[] operands;
	cout << "E2" << endl;


}
void ExpressionEvaluator::setOperand(size_t pos, double value)
{
	operands[pos] = value;
}
void ExpressionEvaluator::setOperands(double* ops, size_t n)
{
	operands = new double[length];
	for (size_t i = 0; i < n; i++)
	{
		operands[i] = ops[i];
	}
}
void logToScreen()
{
	
};
void logToFile(const std::string& filename) {

}

void ExpressionEvaluator::shuffle() {

	double* tempArray = new double[length];
	double temp = 0;
	double temp2 = 0;
	int tempPos1 = 0;
	int tempPos2 = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (operands[i] != int(operands[i]))
		{
			temp = operands[i];
			tempPos1 = i;
			break;
		}
	}
	for (size_t i = length; i > 0; i--)
	{
		if (operands[i] != int(operands[i]))
		{
			temp2 = operands[i];
			tempPos2 = i;
			break;
		}
	}

	tempArray = operands;


	if (tempPos1 != tempPos2 || tempPos1 <= length || tempPos2 <= length)
	{
		tempArray[tempPos1] =  temp2;
		tempArray[tempPos2] =  temp;
		cout << "gg" << endl;
	}

	setOperands(tempArray, length);

}
void ExpressionEvaluator::shuffle(size_t i, size_t j)
{
	double temp = 0;
	
		if (operands[i] != (int)operands[i] || operands[j] != (int)operands[j])
		{
			swap(operands[i], operands[j]);
		}
		else
		{
			/*ничего*/
		}
	

}