#pragma once
#include "ExpressionEvaluator.h"
#include "IShuffle.h"
#include <fstream>

class CustomExpressionEvaluator : public ExpressionEvaluator, public IShuffle
{
public:
	CustomExpressionEvaluator(int n);
	double calculate();
	void swap(double& i, double& j);

	void logToScreen();
	void logToFile(const std::string& filename);

	void shuffle() override;
	void shuffle(size_t i, size_t j) ;

	~CustomExpressionEvaluator();
};

