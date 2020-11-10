#pragma once
#include"Employee.h"
#include"IPictureProcessor.h"
#include<iostream>
#include<string>

class Designer : public Employee, public IPictureProcessor
{
public:
	Designer(const std::string& name, const std::string& lastName, const std::string& gender, const std::string& yearBirth, const std::string& yearActivity, const double& rating, const int countImages);
	void process(const std::string& photo_path) override;
};

