#include "Designer.h"


Designer::Designer(const std::string& name, const std::string& lastName, const std::string& gender, const std::string& yearBirth, const std::string& yearActivity, const double& rating, const int countImages)
	: Employee(name, lastName, gender, yearBirth, yearActivity, rating, countImages)
{
}

void Designer::process(const std::string& photo_path)
{
	cout << "Image was produced  " << name_ << endl;
	countImages_++;
	rating_ +=  1 + rand() % 5;
}

