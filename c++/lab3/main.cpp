#include <iostream>
#include <string>
#include "ILoggable.h"
#include "IShuffle.h"
#include "Subtractor.h"
#include "Multiplier.h"
#include "ExpressionEvaluator.h"
#include "CustomExptrssionEvaluator.h"
using namespace std;


int main() {

	ExpressionEvaluator* ex[3];
	int l = sizeof(ex) / sizeof(ex[0]);


	ex[0] = new Subtractor(6);
	double* ops_sum = new double[6]{ 120, -12,83.2, -1.5, 5 , 7 };
	ex[0]->setOperands(ops_sum, 6);


	ex[1] = new Multiplier(4);
	double* ops_mult = new double[4]{ 5,10, -2.5, -40};
	ex[1]->setOperands(ops_mult, 4);


	ex[2] = new CustomExpressionEvaluator(2);
	double* ops_custom = new double[2]{ -1.5, 80 };
	for (int i = 0; i < 2; i++)
		ex[2]->setOperand(i, ops_custom[i]);


	for (int i = 0; i < l; ++i)
	{
		ex[i]->logToScreen();
		ex[i]->logToFile("log.txt");
	}


}

