#include "ExpressionEvaluator.h"
#include <iostream>
#include <string>
#include <fstream>

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

