#include "CustomExptrssionEvaluator.h"
#include <ctime>
#include <algorithm>


CustomExpressionEvaluator::CustomExpressionEvaluator(int length) : ExpressionEvaluator(length) {}
void CustomExpressionEvaluator::shuffle() {
  
    std::random_shuffle(operands, operands + length);
}
double CustomExpressionEvaluator::calculate() {
	double result = operands[0];
	for (int i = 1; i < length; i++)
	{
		if (i % 2 == 0)
		{
			result /= operands[i];

		}
		else if (i % 2 == 1)
		{
			result *= operands[i];
		}
	}
	return result;
}
void CustomExpressionEvaluator::shuffle(size_t i, size_t j)
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
void CustomExpressionEvaluator::swap(double& i, double& j) {
	double temp = 0;
	temp = i;
	i = j;
	j = temp;
}
CustomExpressionEvaluator::~CustomExpressionEvaluator()
{
	cout << "C" << endl;

}
void CustomExpressionEvaluator::logToScreen()
{
	cout << "\nCustomExpressionEvaluator" << endl;
	cout << "<" << length << ">" << endl;
	int result = 0;
	for (size_t i = 0; i < length; i++)
	{
		result = i % 2;
		if (result == 0)
		{
			operands[i] > 0 ? cout << operands[i] << "  times  " : cout << "(" << operands[i] << ")" << "  times  ";
		}
		else if (result == 1)
		{
			operands[i] > 0 ? cout << operands[i] << "  diveded by  " : cout << "(" << operands[i] << ")" << "  diveded by  ";
		}
	}
	cout << endl;
	cout << "<Result: " << calculate() << ">" << endl;

}
void CustomExpressionEvaluator::logToFile(const string& filename)
{
	ofstream stream;
	stream.open(filename, ios_base::app);

	stream << "CustomExpressionEvaluator" << endl;
	stream << "<" << length << ">" << endl;
	int result = 0;
	for (size_t i = 0; i < length; i++)
	{
		result = i % 2;
		if (result == 0)
		{
			operands[i] > 0 ? stream << operands[i] << "  times  " : stream << "(" << operands[i] << ")" << "  times  ";
		}
		else if (result == 1)
		{
			operands[i] > 0 ? stream << operands[i] << "  diveded by  " : stream << "(" << operands[i] << ")" << "  diveded by  ";
		}
	}
	stream << endl;
	stream << "<Result: " << calculate() << ">" << endl;
	stream.close();
}
