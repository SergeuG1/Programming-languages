#pragma once
#include"ILoggable.h"
#include "IShuffle.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class ExpressionEvaluator : public ILoggable
{
public:
	ExpressionEvaluator();
	ExpressionEvaluator(int n);
	virtual ~ExpressionEvaluator() = 0;

	void setOperand(size_t pos, double value);
	void setOperands(double* ops, size_t n);


	void shuffle();
	void shuffle(size_t i, size_t j);
	virtual double calculate() = 0;
protected:
	int length;
	double* operands;
};

