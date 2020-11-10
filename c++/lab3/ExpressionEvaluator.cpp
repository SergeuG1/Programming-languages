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
	delete[] operands;
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

	std::random_shuffle(operands, operands + length);
}
void ExpressionEvaluator::shuffle(size_t i, size_t j)
{
	double temp = 0;
	try
	{
		if (operands[i] != (int)operands[i] || operands[j] != (int)operands[j])
		{
			swap(operands[i], operands[j]);
		}
		else
		{
			/*ничего*/
		}
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
	}

}