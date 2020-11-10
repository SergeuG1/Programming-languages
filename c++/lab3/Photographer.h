#pragma once
#include <string>
#include<iostream>
#include"Employee.h"
#include"IPictureProcessor.h"

class Photographer : public Employee, public IPictureProcessor {
public:
	Photographer(const std::string& name, const std::string& lastName, const std::string& gender, const std::string& yearBirth, const std::string& yearActivity, const double& rating, const int countImages);
	Photographer();
	void process(const std::string& photo_path) override;
};

