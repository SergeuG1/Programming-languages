#include "Multiplier.h"


Multiplier::Multiplier(int length) : ExpressionEvaluator(length) { }
double Multiplier::calculate() {
	double result = operands[0];
	for (size_t i = 1; i < length; i++) {
		result *= operands[i];
	}
	return result;
}
void Multiplier::logToScreen() 
{
	cout << "\nMultiplier" << endl;
	cout << "<" << length << ">"<< endl;
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
void Multiplier::logToFile(const string& filename)
{
	ofstream stream;
	stream.open(filename, ios_base::app);

	stream << "Multiplier" << endl;
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
Multiplier::~Multiplier()
{
	cout << "M" << endl;
}
