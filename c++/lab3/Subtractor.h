#pragma once
#include"ExpressionEvaluator.h"
#include <fstream>

class Subtractor : public ExpressionEvaluator
{
public:
	Subtractor(int n);
	~Subtractor();
	double calculate() override;

	void logToFile(const std::string& filename) override;
	void logToScreen() override;
};

