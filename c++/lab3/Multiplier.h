#pragma once
#include"ExpressionEvaluator.h"
#include <fstream>

class Multiplier : public ExpressionEvaluator
{
public:
	Multiplier(int n);
	~Multiplier();
	double calculate() override;

	void logToFile(const std::string& filename) ;
	void logToScreen() ;
};

