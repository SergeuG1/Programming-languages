#include "Photographer.h"
#include <iostream>
#include <string>
#include <cmath>


void Photographer::process(const std::string& photo_path)
{
	cout << "Photo was processed  " << name_ << endl;
	countImages_++;
	rating_ += 1 + rand() % 5;
}


Photographer::Photographer(const std::string& name, const std::string& lastName, const std::string& gender, const std::string& yearBirth, const std::string& yearActivity, const double& rating, const int countImages)
	: Employee(name, lastName, gender, yearBirth, yearActivity, rating, countImages)
{
}

Photographer::Photographer() : Employee() {

}